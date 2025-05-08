/*


Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.


*/


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
  numero = Serial.parseFloat();
  
  if(numero >= 0) {
  Serial.println("seu numero e positivo");
  } else {
  Serial.println("seu numero e negativo");
  }
  delay(5000);
}