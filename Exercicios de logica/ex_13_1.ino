// C++ code
//Variáveis
void setup()
{
  Serial.begin(9600);
}
int numero = 0;
void loop()
{
  Serial.println("Digite um numero");
  while(! Serial.available())
}