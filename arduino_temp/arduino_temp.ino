

const int LM35 = 0; //Porta analógica utilizada pelo LM35
float temperatura = 0; //Variável para ler o valor da temperatura
int ADClido = 0; //Variável para ler o valor analógico da porta
int Cooler = 11;
int Buzzer = 12;

void setup() 
{
 Serial.begin(9600);    //Inicializa a comunicação serial
 analogReference(INTERNAL1V1); //Define a tensão máxima de 1,50V
 pinMode(Cooler, OUTPUT);
 pinMode(Buzzer, OUTPUT);
}
 
void loop() 
{
digitalWrite(Buzzer, LOW);
digitalWrite(Cooler, LOW);

 ADClido = analogRead(LM35);
 temperatura = ADClido * 0.1075268817204301;
 if(temperatura < 40.00)
 {
 Serial.print("TEMP1|");
 Serial.print(temperatura);
 delay(4000);
 }
 
if (temperatura >= 40.00)
 { 
 digitalWrite(Cooler, HIGH);
 digitalWrite(Buzzer, HIGH);
  Serial.print("TEMP1|");
 Serial.print(temperatura);
 delay(4000);
 }
}
