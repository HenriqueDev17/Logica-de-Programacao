// C++ code
//Variavéis
void setup()
{
  Serial.begin(9600);
}

void loop()
{                       // esqueci de declarar a media
  float n1, n2, media; //tive dificuldade em lembrar oque eu colocaria em n1, de resto eu consegui executar
  
    Serial.println("Digite a primeira nota");
    while(!Serial.available());
    n1 = Serial.parseFloat();
    
    Serial.println("Digite a segunda nota");
    while(!Serial.available());
    n2 = Serial.parseFloat();

  //processamento
   media = (n1 + n2)/ 4
  
  //saída
     if( media => 7){
     Serial.println("Resultado da primeira nota :" + String(media));
     Serial.println("media");
     else if(media >= 5 && < 7 ) // nao lembrava do else if
       Serial.println("Sua media eh");
       
       //não consegui acabar o codigo, espero que na proxima eu melhore
       
     
     
}