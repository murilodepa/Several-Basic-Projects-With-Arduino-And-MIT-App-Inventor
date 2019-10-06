
const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;

void setup()
{  
  
  Serial.begin(9600);
  analogReference(INTERNAL1V1);
  //pinMode(Motor01, OUTPUT);
  //pinMode(Botao, INPUT_PULLUP);
}


void loop()
{
  
 ADClido = analogRead(LM35);
 temperatura = ADClido * 0.1075268817204301;
 //EstadoBotao = digitalRead(Botao);
 
 Serial.print("TEMP1|");
 Serial.print(temperatura);
 delay(1000);
}
