// C++ code
//Variáveis Globais
//vetor tamanho 6: vai de 0 até 5
String frutas[6];//cria um vetor tamanho 6 (preenchendo as posições com strings vazias)
float precosFrutas[6];
void setup()
{
  Serial.begin(9600);
 
  Serial.println("***PROGRAMA SACOLAO DO ZEH***");
  Serial.println();
  
  
  Serial.println("oh zeh, bora cadastrar as frutas!");
  
  Serial.println();
  //pede as frutas para o usuário
  for(int i = 0; i <= 5; i++){
  //pega a fruta do usuário
    Serial.println("Informe a " + String(i + 1) + "a Fruta:");
    while(!Serial.available());
    String frutaDigitada = Serial.readString();
    
  //pega o preço da fruta
    Serial.println("Qual o preco de " + frutas[i] + "?");
    while(!Serial.available());
    float precoDigitado = Serial.parseFloat();
    
    
    //põe a fruta na sacola /cadastra a fruta no array/vetor
    frutas[i] = frutaDigitada;
    precosFrutas[i] = precoDigitado;
  
  }//fim do for
  
  Serial.println("Exibindo os valores cadastros: ");
  Serial.println();
 
  for(int i = 1; i <=5; i++)
  {
  Serial.println(String(i + 1) + "a Fruta: " + frutas[i]);
  Serial.println("Preco da Fruta: " + String(precosFrutas[i]));
  }
  
}//fim do setup

void loop()
{

}