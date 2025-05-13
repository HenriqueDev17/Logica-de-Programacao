
float resultado;  


int escolhaDaOperacao;
int contador = 0;

float somar(float numero1, float numero2, float numero3 = 0){
  
  return (numero1 + numero2 + numero3); //retornar a soma
  
}

	void subtrair(float numero1, float numero2){
	resultado = numero1 - numero2;
}

	void multiplicar(float numero1, float numero2){
 	resultado = numero1 * numero2;
}
	void dividir(float numero1, float numero2){
	resultado = numero1 / numero2;
}



void setup()
{
  Serial.begin(9600);
  	float numero1 = 0.0; //variavel global
	float numero2 = 0.0;
  
  do{
     Serial.println("---------------------------------------------------");
     Serial.println("Bem vindo(a) a calculadora mega inteligente :P!!!");
     Serial.println("Escolha uma das opcoes/operacoes:");
     Serial.println("1 - Somar");
     Serial.println("2 - Subtrair");
     Serial.println("3 - Multiplicar");
     Serial.println("4 - Dividir");
     Serial.println("---------------------------------------------------");

     while(!Serial.available()){} //Espera o usúario digitar

     escolhaDaOperacao = Serial.parseInt(); //Armazena o que o usúario digitou na variável

     Serial.println("Agora, para realizar a operacao, digite o 1º numero:");
     while(! Serial.available()){} //Espera o usuário digitar
     numero1 = Serial.parseFloat();

     Serial.println("Agora digite o 2º numero:");
     while(! Serial.available()){} //Espera o usuário digitar
     numero2 = Serial.parseFloat();
    
    switch(escolhaDaOperacao){
      case 1:
     
      resultado = somar(numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
        break;
      
      case 2:
      subtrair(numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
        break;
      
      case 3:
      multiplicar (numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
        break;
      
      case 4:
      dividir (numero1, numero2);
      Serial.println("WOW!!! o resultado foi: " + String(resultado));
        break;
      
      default:
      Serial.println("Opcão inválida");
      
    }
    
    Serial.println("Você deseja continuar? Se sim, digite [s], se não digite [n]");
    while(!Serial.available()){} //Espera o usuário digitar
    
    if(Serial.readString() == "s"){
      contador++;
    }
    else{
    contador = 0;
      
    Serial.println("Ate breve, obrigado por usar a calculadora inteligente");
    Serial.println("Caso queira voltar, reinicie o sistema.");
    }
    
  }
  while(contador != 0 );
}

void loop()
{
  //sem código
}