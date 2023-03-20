//LED ARDUINO

//Definindo Variáveis 
#define pinoLED1 1
#define pinoLED2 2 
#define pinoLED3 3 
#define pinoLED4 4 
#define pinoLED5 5  
#define pinoLED6 6 


//Inicializando e definindo variáveis como saída
void setup() 
{
  pinMode(pinoLED1, OUTPUT);
  pinMode(pinoLED2, OUTPUT);
  pinMode(pinoLED3, OUTPUT);
  pinMode(pinoLED4, OUTPUT);
  pinMode(pinoLED5, OUTPUT);
  pinMode(pinoLED6, OUTPUT);
}

void loop() 
{
  
 //LED que ficará piscando
 digitalWrite(pinoLED1, HIGH);
  delay(1000);
 digitalWrite(pinoLED1,LOW);
   delay(1000);

 //LED que ficará aceso 
 digitalWrite(pinoLED2, HIGH);
 digitalWrite(pinoLED3, HIGH);
 digitalWrite(pinoLED4, HIGH);
 digitalWrite(pinoLED5, HIGH);
 digitalWrite(pinoLED6, HIGH);
}
