

//------------------------------------------------------------------------------------- INCLUDES
#include <LiquidCrystal.h>

//------------------------------------------------------------------------------------- DEFINES
//defines i2c
#define SDA 6
#define SCL 7
#define SDA0 digitalWrite(SDA,LOW)
#define SDA1 digitalWrite(SDA,HIGH)
#define SCL0 digitalWrite(SCL,LOW)
#define SCL1 digitalWrite(SCL,HIGH)


//------------------------------------------------------------------------------------- ACK i2c
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



//------------------------------------------------------------------------------------- SETUP
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SDA, OUTPUT);
  pinMode(SCL, OUTPUT);
  lcd.begin(numCols, numRows);
  lcd.setCursor(0,0);
  lcd.print("Teste1");
  lcd.setCursor(0,1);
  lcd.print("Teste2");
}





//------------------------------------------------------------------------------------- WHILE1
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
