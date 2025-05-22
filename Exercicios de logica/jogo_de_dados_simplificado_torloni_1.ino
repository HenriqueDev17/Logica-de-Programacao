// C++ code
//

/*
    Função que desenha o cabeçalho, pula uma linha e aguarda
    2000 milissegundos a finalizar
*/
int numeroDoDado;
void desenhaCabecalho()
{ 
	Serial.println("--------------------------------------");
	Serial.println("|                                    |");
	Serial.println("|                                    |");
	Serial.println("|  ---- PROGRAMA JOGO DE DADOS ----  |");
	Serial.println("|                                    |");
	Serial.println("|                                    |");
	Serial.println("--------------------------------------");
  	delay(500);
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
  Serial.print(".");
    delay(700);
  }

}
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randomica para evitar pega o mesmo valor
}

void loop()
{
 desenhaCabecalho();//desenha o cabeçalho na tela
  
  //solicita o palpite do usuario
  Serial.println("Diga seu palpite de 1 a 6: " );
  while(!Serial.available());
  int numeroDoDado = Serial.parseInt();
  
  //jogar o dado - //sorteia um numero de 1 até 7 - 1 ou seja, 6
  int numeroSorteado = random(1, 7);//numero entre 1 e 6
  Serial.print("Jogando o dado ");
  desenhaPontinhos();
  {

  //exibir o palpite do usuario
  Serial.println("Seu palpite foi: " + String(numeroDoDado));
  //exibir o numero sorteado
  Serial.println("numero do dado: " + String(numeroSorteado));
  }
 //valida o resultado
  if(numeroDoDado == numeroSorteado)
  {
  Serial.println("Parabens, voce acertou!!");
  } else {
  Serial.println("Que pena, tente outra vez!!");
  }
  {
   Serial.println("Reiniciando o programa...");
  Serial.println();
  delay(700);
  }
}