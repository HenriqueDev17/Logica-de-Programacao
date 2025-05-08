
/*
Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/
// C++ code
//Variável
String nome = "";
String cargo = "";
float salario = 0;
float salarioAcrescido =0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu nome");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário / ler um texto da serial
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu cargo");//pergunta o cargo do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargo = Serial.readString();//resposta do usuário / ler um texto da serial
  cargo.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu salario");//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salario = Serial.parseFloat();//resposta do usuário
  
  
  if (salario < 1000){
  	salarioAcrescido = salario * 1.10;
  }
  
   Serial.println("Digite o nome:" + String (nome) );
   Serial.println("Digite o cargo:" + String (cargo) );
   Serial.println("Digite o salario:" + String (salario) );
}
