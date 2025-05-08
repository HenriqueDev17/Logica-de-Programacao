// C++ code
// Faça um programa que receba o nome, o peso e a altura de uma pessoa.
//Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
// (altura * altura).

void setup( )
{
   Serial.begin(9600);
}
  
String nome = "";
float peso = 0;
float altura = 0;
float alturaIMC = 0;
float IMC = 0;
void loop()
{  
  // entrada
  Serial.println("digite a seu nome");
  while(! Serial.available() ){}
  nome = Serial.parseFloat();
  Serial.println("digite a seu peso");
  while(! Serial.available() ){}
  peso = Serial.parseFloat();
  Serial.println("digite a sua altura");
  while(! Serial.available() ){};
  altura = Serial.parseFloat();
  
  //processamento
  alturaIMC = float(altura) * float(altura);
  IMC = float(peso) / float(alturaIMC);
  
  //saida
  Serial.println("seu nome eh: " + String(nome));
  Serial.println("seu IMC eh: " + String(IMC));
  Serial.println();

}