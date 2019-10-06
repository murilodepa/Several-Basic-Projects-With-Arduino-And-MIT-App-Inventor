int readBluetooth;          //Variável que irá receber o comando enviado do Android
int lamp = 10;

void setup() {
  Serial.begin(9600);    //Inicializa a comunicação serial
  pinMode(lamp,OUTPUT);  //Definindo o pino lamp como saída
}

void loop() {
  
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
}
