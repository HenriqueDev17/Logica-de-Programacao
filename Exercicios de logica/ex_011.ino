// Faça um programa que receba a idade de uma pessoa em anos
// E imprima essa idade em: Meses, Dias, Horas, Minutos.

// variaveis
int idade = 0;//inicia a idade
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
 //entrada
  Serial.println(" Digite sua idade");//pergunte a idade do usuário
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para o loop)
  idade = Serial.parseInt();
  
  //processamento
   idadeMeses = idade * 12;
   idadeDias  = idade * 365;
   idadeHoras = idadeDias * 24;
   idadeMinutos = idadeHoras * 60;
  
  //saída
   Serial.println("Sua idade em meses: " + String(idadeMeses) );
   Serial.println("Sua idade em dias: " + String(idadeDias) );
   Serial.println("Sua idade em horas: " + String(idadeHoras) );
   Serial.println("Sua idade em minutos: " + String(idadeMinutos) );
}