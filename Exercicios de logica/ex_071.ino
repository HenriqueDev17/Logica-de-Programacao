//Faça um programa que receba o nome, cargo, e salário
//salário a ser acrescido de 10%

void setup()
{
 Serial.begin (9600);
}
 // Variáveis
 String nome;
 String cargo; 

 float salarioInicial  = 0;
 float salarioAcrescido = 0;

void loop()
{
  //entrada
  //cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");//primeira Linha
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_07        |"); 
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//última Linha
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  

  
  Serial.println("Digite o nome :");
  while (!Serial.available()) {}
  nome = Serial.readString();
  nome.trim ();
   Serial.println("Digite o cargo:");
  while (!Serial.available()) {}
  cargo = Serial.readString();
  nome.trim ();
 
  Serial.println("Digite o salário Inicial :");
  while (!Serial.available()) {}
  salarioInicial = Serial.parseInt();
   //processamento
  salarioAcrescido = salarioInicial + (salarioInicial * 0.10);
  
  //Saida
  Serial.println();
  Serial.println();
  
  Serial.println("relatorio");
  Serial.println();
  Serial.println("|-------------------------|");
  Serial.println();
  
  Serial.println("O seu nome eh:" + String(nome));
  Serial.println("O seu salario acrescido eh :" + String(salarioAcrescido));
  Serial.println();
  Serial.println("|-------------------------|");
  delay(1000);
}
  
    