/*   Instituição: Pontifícia Univercidade Católica de Campinas
     Integrantes do Grupo: César Marrote Manzano 
                           Fabrício Silva Cardoso
                           Guilherme Nazatto Lima
                           Murilo de Paula Araujo
                           Pedro Ignácio Trevisan
                           
     Professor: Franscisco de Salles Cintra Gomes                         
              
     Projeto de Circuitos Elétricos e Eletrônica Básica                       *
 */

int readBluetooth;          //Variável que irá receber o comando enviado do Android
int lamp = 10;
int Cooler = 11;
int Buzzer = 12;
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int dp = 9;

const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;

void setup() 
{
 Serial.begin(9600);    //Inicializa a comunicação serial
 analogReference(INTERNAL1V1);
 pinMode(lamp,OUTPUT);  //Definindo o pino lamp como saída
 pinMode(Cooler,OUTPUT);
 pinMode(Buzzer,OUTPUT);
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
 pinMode(dp, OUTPUT);
}
 
void loop() 
{
  digitalWrite(Cooler, LOW);
  digitalWrite(Buzzer, LOW);
  digitalWrite(lamp, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
  
  if(Serial.available()>0)       //Verifica se algo chegou via Bluetooth     
      {
      readBluetooth=Serial.read();   //Grava esse algo lido na variável
      if(readBluetooth == 'a')
      {
      digitalWrite(lamp,!digitalRead(lamp));  //Alterna estado da lâmpada
      delay(250);
      Serial.write(digitalRead(lamp));        //Checa estado da lâmpada
      }
     }
     /*
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
      digitalWrite(g, LOW);
      digitalWrite(dp, HIGH);
      }

       if(readBluetooth == 'B')
      {
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
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
      
 ADClido = analogRead(LM35);
 temperatura = ADClido * 0.1075268817204301;
  
 Serial.print("TEMP1|");
 Serial.print(temperatura);
 delay(4000);

 while(temperatura > 40)
 {
  digitalWrite(Cooler, HIGH);
  digitalWrite(Buzzer, HIGH);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      
  delay(300);
  digitalWrite(Buzzer, LOW);

  delay(300);
  digitalWrite(Buzzer, HIGH);

  delay(300);
  digitalWrite(Buzzer, LOW);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(dp, LOW);

      delay(300);
 }

 */
    //Sensor de temperatura ou Infra
  }
