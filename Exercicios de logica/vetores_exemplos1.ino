// C++ code
//
void setup()
{
 Serial.begin(9600);
  
  //variável primitiva/ comum - só guarda um valor por vez
  int numero = 5;
  
  numero = numero + 2;
  //vetores - variáveis construídas (estrutura de dados)
  //podem guardar vários valores em um único nome
  
  //                 0   1   2   3   4 - índices/posições
  int numeross[5] = {10, 20, 30, 40, 50};
  
  
  Serial.println(numero);
  Serial.println(numeross[3]);//40
  
  numeross[3] = 400;//troca o valor que está na 4a gaveta
  
  Serial.println(numeross[3]);//imprime o novo valor da 4a gaveta
  
  Serial.println("Uma linha qualquer");
  Serial.println("Uma linha qualquer");
  
  for(int linha = 1; linha <= 2; linha++){
     Serial.println("Uma linha qualquer - for");
  }
  int contadorLinha = 1;
  while(contadorLinha <= 2){
  Serial.print("Uma linha qualquer - while");
    contadorLinha++;
  }
  
  contadorLinha = 1;
  do {
    Serial.println("Uma linha qualquer - do while");
    contadorLinha++;
  }while(contadorLinha <= 2);
}

void loop()
{
  
}