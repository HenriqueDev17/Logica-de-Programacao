//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima
//a. A idade dessa pessoa
//b. Essa idade convertida em semana


void setup()
{
  Serial.begin(9600);
}
//Variáveis - criação e inicialização
int anoDeNascimento = 0;
int anoAtual = 0;
int idadeDaPessoa = 0;
int IdadeSemanas = 0;



void loop()
{
  
  //Cabeçalho - 2 pipes + 30 tracinhos
  Serial.println( "|------------------------------|" );
  Serial.println( "|                              |" );
  Serial.println( "|        LOPAL-EX_2            |" ); 
  Serial.println( "|                              |" );
  Serial.println( "|------------------------------|" );
                 
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
                 
  //entradas
  Serial.println ("Digite seu ano de nascimento");//pergunta
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  anoDeNascimento = Serial.parseInt();//resposta do usario
 
  Serial.println ("Digite o ano atual");//pergunta
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  anoAtual = Serial.parseInt();//resposta do usario
 
  //processamento
  idadeDaPessoa = anoAtual - anoDeNascimento;
  IdadeSemanas = idadeDaPessoa * 52;
 
  //saida
  Serial.println ("Sua idade: " + String(idadeDaPessoa) );
  Serial.println ("Sua idade em semanas: " + String(IdadeSemanas) );
}