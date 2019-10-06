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
int lamp = 8;

void setup() 
{
 Serial.begin(9600);    //Inicializa a comunicação serial
 pinMode(lamp,OUTPUT);  //Definindo o pino lamp como saída
 digitalWrite(lamp, LOW); // escreve o estado da porta 4 como LOW / desligado
}
 
void loop() 
{
  
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
    //Sensor de temperatura ou Infra
  }
