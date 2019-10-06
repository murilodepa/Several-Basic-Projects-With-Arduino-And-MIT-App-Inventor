
int saidaLDR = 26; //Porta a ser utilizada para ligar o led  
int leituraLDR = A5; //Porta analógica utilizada pelo LDR  
int valorLDR = 0;

void setup()  
{  
  Serial.begin(9600); //Inicia a comunicação serial
  pinMode(saidaLDR, OUTPUT); //Define a porta do Led como saída  
}  
   
void loop()  
{  
  valorLDR = analogRead(leituraLDR);  //Lê o valor fornecido pelo LDR  
    
  // Caso o valor lido na porta analógica seja maior do que 
  // 800, acende o LED  
  // Ajuste o valor abaixo de acordo com o seu circuito  
  if (valorLDR >= 700)    
  {  
    digitalWrite(saidaLDR, HIGH);  
  }  
  else  //Caso contrário, apaga o led  
  {  
    digitalWrite(saidaLDR, LOW);  
  }  

  Serial.print("LDR|");
  Serial.print(valorLDR);
  delay(4000);
} 
