int porta = 10;


#define LEDverde 10
#define LEDamarelo 9
#define LEDvermelho 8

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

   Serial.begin(115200);


}


void loop()
{
  
    Serial.println("Olá, mundo!");
    minhaFuncao();
} 
  
void minhaFuncao(){
  
  
  // LED no Pino 10
  digitalWrite(10, HIGH); // Liga o LED
  delay(1000);
  digitalWrite(10, LOW);  // Desliga o LED

  // LED no Pino 9
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);

  // LED no Pino 8
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
}
