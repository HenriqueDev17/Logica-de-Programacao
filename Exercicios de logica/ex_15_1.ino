// C++ code
//
float n1, n2, n3, n4, media;//cria as 5 variáveis de uma só vez e inicializa

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite a primeira nota");
  while(!Serial.available());
  n1 = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota");
  while(!Serial.available());
  n2 = Serial.parseFloat();
  
  Serial.println("Digite a terceira nota");
  while(!Serial.available());
  n3 = Serial.parseFloat();
  
  Serial.println("Digite a quarta nota");
  while(!Serial.available());
  n4 = Serial.parseFloat();
  
  //processamento
  media = (n1 + n2 + n3 + n4)/ 4;
  
  //saida 
  if( media >= 7){
  Serial.println("media: " + String(media));
  Serial.println("Aprovado");
  } else if(media >= 5 && media < 7){
    Serial.println("Recuperacao");
  } else {
    Serial.println("Reprovado");
  }
    
    
  }
  
 