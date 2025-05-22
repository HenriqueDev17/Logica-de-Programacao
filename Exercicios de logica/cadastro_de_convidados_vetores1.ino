// C++ code
//Variáveis Globais
/*
	Cria um vetor tamanho 4, de zero a 3
    fazendo parte do mesmo cadastro
*/
int qtdCadastro = 4;
String convidados[4];
int idadeConvidados[4];//Camel Case
String emailConvidados[4];


//Funções
void desenhaCabecalho()
{
  Serial.println("----------------------------------");
  Serial.println("|                                |");
  Serial.println("|     BEM VINDO   A  FESTA       |");
  Serial.println("|                                |");
  Serial.println("----------------------------------");
}


void setup()
{
  Serial.begin(9600);//inicia a comunicação serial
}


void loop()
{

  //fazer um cabeçalho bonitinho para o programa
  desenhaCabecalho();//chama a função para desenhar o cabeçalho
  
  //cadastrar os dados
  for(int i = 0; i < 4; i++)
  {
    //solicitar o nome do usuário
    Serial.println("Informe " +String(i + 1)+ "o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    //solicitar a idade
    Serial.println("Informe a idade de " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
    //solicitar o email
    Serial.println("Informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    
  }//fim do for
  
  
  
  
  //Exibir a lista de convidados - obs: só vai na festa quem for maior de idade >= 18
  //obs: só vai na festa quem for maior de idade >= 18
  Serial.println(" ** Exibindo convidados eleitos para a festa ** ");
  Serial.println();
  Serial.println();
  for(int i = 0; i < 4; i++)
  {
    //if(idadeConvidados[i] >= 18)
  //{//apenas maiores de 18
  Serial.println("Nome: " + convidados[i]);
  Serial.println("Idade: " + String(idadeConvidados[i]));
  Serial.println("Email: " + emailConvidados[i]);
  Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "Ok" : "Menor de Idade"));
  Serial.println();
    //}//fim do if
    
  }//fim do for
  
  
  delay(2000);//pausa de 2 segundos
}