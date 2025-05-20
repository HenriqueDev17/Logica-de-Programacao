// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  
  Serial.println("***PROGRAMA SACOLAO DO ZEH***");
  Serial.println();
  
  String frutas[6];//cria um vetor tamanho 6 (preenchendo as posições com strings vazias)
  
  Serial.println("oh zeh, bora cadastrar as frutas!");
  
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
  //pega a fruta do usuário
    Serial.println("Informe a " + String(i + 1) + "a Fruta:");
    while(!Serial.available());
    String frutaDigitada = Serial.readString();
    
    //põe a fruta na sacola /cadastra a fruta no array/vetor
    frutas[i] = frutaDigitada;
  
  }//fim do for
  Serial.println();
  for(int i = 1; i <=5; i++){
  Serial.println(frutas[i]);
  }
  
}

void loop()
{

}