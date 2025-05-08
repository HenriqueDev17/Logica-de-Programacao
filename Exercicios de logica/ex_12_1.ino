// C++ code
//Variáveis
void setup()
{
  Serial.begin(9600);
}
int numero = 0;
void loop()
{
  Serial.println("Digite o numero");
  while (!Serial.available()) {}
  numero = Serial.parseInt();
  
  if(numero %2 == 1) {
  Serial.println("seu numero e impar");
  } else {
  Serial.println("seu numero e par");
  }
  delay(5000);
}