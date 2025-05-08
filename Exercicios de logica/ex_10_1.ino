/*

Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.


*/




// C++ code
//Variáveis
float preco;
float percentual;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("qual o preco do produto");
  while(!Serial.available());
    preco = Serial.parseFloat();//espera o usuario digitar
  
  Serial.println("Digite o percentual");
  while(!Serial.available());
   percentual = Serial.parseFloat();
  
  
  
  //Processamento
  
  if(preco < 1000){
    preco = preco * 1.20;
    Serial.println("O lucro de sua venda sera baixo :" + String(preco));
  } else {
    Serial.println("O percentual aumentou");
  }
  
    
}