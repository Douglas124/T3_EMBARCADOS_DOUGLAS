

//------------------------------------------------------------------------------------- INCLUDES
#include <LiquidCrystal.h>

//------------------------------------------------------------------------------------- DEFINES
//defines i2c
#define SDA A4
#define SCL A5
#define SDA0 digitalWrite(SDA,LOW)
#define SDA1 digitalWrite(SDA,HIGH)
#define SCL0 digitalWrite(SCL,LOW)
#define SCL1 digitalWrite(SCL,HIGH)



//------------------------------------------------------------------------------------- INICIALIZAÇÃO DAS BIBLIOTECAS
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


//------------------------------------------------------------------------------------- VAR GLOBAIS
// these constants won't change.  But you can change the size of
// your LCD using them:
const int numRows = 2;
const int numCols = 16;

typedef struct{
  char nome[20];
  char cargo[20];
  char matricula[10];
  char hora_entrada[12];
  char data_entrada[12];
  char hora_saida[12];
  char data_saida[12];
  char fim = '.';
}estrutura;
estrutura usuario, usuarioRX;


//------------------------------------------------------------------------------------- FUNÇÕES 
//--------------------------------------------------- ACK i2c
int ack_i2c(void){
  int x;                                // muda a config do pino de saida para entrada para poder ler o ack depois muda para sada de novo
  pinMode(SDA, INPUT);
  SCL1;
  delay(1);//1 milisegundo
  x = digitalRead(SDA); //L^E O PINO
  SCL0;
  delay(1);//1 milisegundo
  pinMode(SDA, OUTPUT);
  return x; //se 0 ok, se 1 erro
}

//--------------------------------------------------- START I2C PADRAO
  void start_i2c(void){
  SDA1;
  delay(1);//1 milisegundo
  SCL1;
  delay(1);//1 milisegundo
  SDA0;
  delay(1);//1 milisegundo
  SCL0;
  delay(1);//1 milisegundo
}

//--------------------------------------------------- STOP I2C PADRAO
  void stop_i2c(void) {
  SDA0;
  delay(1);//1 milisegundo
  SCL0;
  delay(1);//1 milisegundo
  SCL1;
  delay(1);//1 milisegundo
  SDA1;
  delay(1);//1 milisegundo
}

//--------------------------------------------------- Envia 1 pelo I2C
  void envia_1_i2c(void){
  SDA1;
  delay(1);//1 milisegundo
  SCL1;
  delay(1);//1 milisegundo
  SCL0;
  delay(1);//1 milisegundo
}

//--------------------------------------------------- Envia 0 pelo I2C
  void envia_0_i2c(void){
  SDA0;
  delay(1);//1 milisegundo
  SCL1;
  delay(1);//1 milisegundo
  SCL0;
  delay(1);//1 milisegundo
}

//--------------------------------------------------- LE UM BYTE
  int8_t le_byte(void){
  uint8_t x=0;                                // muda a config do pino de saida para entrada para poder ler o ack depois muda para sada de novo
  pinMode(SDA, INPUT);
  
  for (int i=0; i<8; i++){
  SCL1;
  delay(1);//1 milisegundo
  x = x<<1;
  x |= digitalRead(SDA); //L^E O PINO
  SCL0;
  delay(1);//1 milisegundo
  }
  
  pinMode(SDA, OUTPUT);
  return x; 
}

//--------------------------------------------------- ENVIA UM BYTE
  void envia_byte(uint8_t dado){
    if ((dado & 0x80)==0) envia_0_i2c();
      else envia_1_i2c();
    if ((dado & 0x40)==0) envia_0_i2c();
      else envia_1_i2c();
    if ((dado & 0x20)==0) envia_0_i2c();
      else envia_1_i2c();
    if ((dado & 0x10)==0) envia_0_i2c();
      else envia_1_i2c();
    if ((dado & 0x08)==0) envia_0_i2c();
      else envia_1_i2c();
    if ((dado & 0x04)==0) envia_0_i2c();
      else envia_1_i2c();
    if ((dado & 0x02)==0) envia_0_i2c();
      else envia_1_i2c();
    if ((dado & 0x01)==0) envia_0_i2c();
      else envia_1_i2c();
 }

//--------------------------------------------------- ESCREVE CARTAO
 void escreve_cartao (uint8_t endereco, uint8_t dado){
  start_i2c();
  envia_byte(0xA0); //1010 0000
  ack_i2c();
  envia_byte(endereco); 
  ack_i2c();
  envia_byte(dado);   
  ack_i2c();
  stop_i2c();
}

//--------------------------------------------------- LE CARTAO
 uint8_t le_cartao (uint8_t endereco){
  uint8_t dado1;
  start_i2c();
  envia_byte(0xA0); //1010 0000
  ack_i2c();
  envia_byte(endereco); 
  ack_i2c();
  start_i2c();
  envia_byte(0xA1); //aqui é 0xA1
  ack_i2c();
  dado1 = le_byte();
  envia_1_i2c(); // aqui é envia 1
  stop_i2c();

  return dado1;
}

//--------------------------------------------------- ESCREVE ESTRUTURA
void escreve_estrutura (void){
  uint8_t vetor[sizeof(usuario)];
  int i=0,tamanho=0;
  memcpy(vetor,&usuarioRX,sizeof(usuario));

  for(i=0;i<sizeof(usuario);i++){
    escreve_cartao(i,vetor[i]);
    delay(10);
  }
//  tamanho = sizeof(usuario);
  lcd.setCursor(0,0);
  lcd.print("Cartao Gravado");
  delay(1000);
  lcd.clear();
//   escreve_cartao(0,"1");
//   delay(10);
}

//--------------------------------------------------- LE ESTRUTURA
void le_estrutura (void){   // le a estrutura e armazena em um vetor, e envia pela serial para o QT
  uint8_t vetor[sizeof(usuario)];
  int i=0;

  for(i=0;i<sizeof(usuario);i++){
    vetor[i] = le_cartao(i);
  }

    memcpy(&usuario,vetor,sizeof(usuario));
}


//--------------------------------------------------- TESTA CARTAO
int testa_cartao (void){   // le a estrutura e armazena em um vetor, e envia pela serial para o QT
  uint8_t teste;
  int i=0;
  static int aux;

  teste = le_cartao(0);
  if (teste == 1){
  aux = 1;
  Serial.write('1');
  lcd.setCursor(0,0);
  lcd.print("usuario cadastrado");
  }
  else {
   aux = 666;
   Serial.write('0');
   lcd.setCursor(0,0);
   lcd.print("nada");
  }

  return aux;
}




//------------------------------------------------------------------------------------- SETUP
void setup() {
  // initialize digital pin LED_BUILTIN as an output.  
  Serial.begin(9600);
  delay(100);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SDA, OUTPUT);
  pinMode(SCL, OUTPUT);
  lcd.begin(numCols, numRows);
//  lcd.setCursor(0,0);
//  lcd.print("Teste1");
//  lcd.setCursor(0,1);
//  lcd.print("Teste2");
}





//------------------------------------------------------------------------------------- WHILE1
void loop() {

  if(Serial.available())
  {
      Serial.readBytesUntil('.',(char*)&usuarioRX, sizeof(usuario));
      
      escreve_estrutura();
      
      Serial.write(usuario.nome);
      lcd.setCursor(0,0);
      lcd.print(usuario.nome);
      lcd.setCursor(0,1);
      lcd.print(usuario.cargo);
      le_estrutura();
      Serial.write((char*)&usuario, sizeof(usuario));
  }

  
}
