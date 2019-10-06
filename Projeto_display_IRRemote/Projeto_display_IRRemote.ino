#include <IRremote.h>


int readBluetooth;          //Variável que irá receber o comando enviado do Android

int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int dp = 9;

int RECV_PIN = 50;
int led1 = 39;
int led2 = 38;
int led3 = 37;
int led4 = 36;
int led5 = 35;
int led6 = 34;
int led7 = 33;
int led8 = 32;
int led9 = 31;
int led10 = 30;

IRrecv irrecv(RECV_PIN);

decode_results results;


void setup() 
{
 Serial.begin(9600);    //Inicializa a comunicação serial
 analogReference(INTERNAL1V1);

 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
 pinMode(dp, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
}
 
void loop() 
{
 
      readBluetooth=Serial.read();   //Grava esse algo lido na variável
      
     if(readBluetooth == '1')
      {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '2')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '3')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '4')
      {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '5')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      }
    
    if(readBluetooth == '6')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '7')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '8')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '9')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      }

      if(readBluetooth == '0')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(dp, LOW);
      }

       if(readBluetooth == 'A')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      }

       if(readBluetooth == 'B')
      {
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      }

      if(readBluetooth == 'C')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(dp, HIGH);
      }

      if(readBluetooth == 'D')
      {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      }

      if(readBluetooth == 'E')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      }

      if(readBluetooth == 'F')
      {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      }

       if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }

  if(results.value == 0xF7C03F){
  digitalWrite(led1, HIGH); 
  }
  
  if(results.value == 0xF740BF){
  digitalWrite(led1, LOW); 
  }

   if(results.value == 0xF700FF){
  digitalWrite(led2, HIGH); 
  }

   if(results.value == 0xF7807F){
  digitalWrite(led2, LOW); 
  }

   if(results.value == 0xF720DF){
  digitalWrite(led3, HIGH); 
  }

   if(results.value == 0xF7A05F){
  digitalWrite(led3, LOW); 

  }

   if(results.value == 0xF7609F){
  digitalWrite(led4, LOW); 
  }

   if(results.value == 0xF7E01F){
  digitalWrite(led4, HIGH); 
  }

   if(results.value == 0xF710EF){
  digitalWrite(led5, HIGH); 
  }

   if(results.value == 0xF7906F){
  digitalWrite(led5, LOW); 
  }

   if(results.value == 0xF750AF){
  digitalWrite(led6, LOW); 
  }

   if(results.value == 0xF7D02F){
  digitalWrite(led6, HIGH); 
  }

 if(results.value == 0xF730CF){
  digitalWrite(led7, HIGH); 
  }

   if(results.value == 0xF7B04F){
  digitalWrite(led7, LOW); 
  }

  if(results.value == 0xF7708F){
  digitalWrite(led8, LOW); 
  }

   if(results.value == 0xF7F00F){
  digitalWrite(led8, HIGH); 
  }

   if(results.value == 0xF708F7){
  digitalWrite(led9, HIGH); 
  }

   if(results.value == 0xF78877){
  digitalWrite(led9, LOW); 
  }

   if(results.value == 0xF748B7){
  digitalWrite(led10, LOW); 
  }

   if(results.value == 0xF7C837){
  digitalWrite(led10, HIGH); 
  }

  
     
  }
