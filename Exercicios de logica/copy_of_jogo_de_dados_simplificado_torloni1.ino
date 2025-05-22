//Variáveis Gloais



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

  //perguntar ao usuário quantas vezes ele quer jogar
  //criar os vetores baseados na quantidade de rodadas
  //jogar apenas essa quantidade (laço de repetição)

  //entrada
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();
  
  //Criar os arrays de estatísticas para o relatório final
  //os Vetores do tamanho da quantidade de rodadas
  int vetPalpites[qtdRodadas];//tamanho do vetor? R: Depende de quantas vezes vai rodar
  int vetResultados[qtdRodadas];//mesmo tamanho


  for(int r = 0; r < qtdRodadas; r++)
  {//aqui dentro, o jogo todo!!!

    //solicita o palpite do usuario
    Serial.println("Diga seu palpite de 1 a 6: " );
    while(!Serial.available());
    int numeroDoDado = Serial.parseInt();

    //jogar o dado - //sorteia um numero de 1 até 7 - 1 ou seja, 6
    int numeroSorteado = random(1, 7);//numero entre 1 e 6
    Serial.print("Jogando o dado ");
    desenhaPontinhos();
    
    //guardar os dados para estatisticas
    vetPalpites[r] = numeroDoDado;
    vetResultados[r] = numeroSorteado;
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

  }//fim do for da rodada
  
  //ao finalizar, mostrar as estatisticas das jogadas - um relatorio
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();
  for(int i = 0; i < qtdRodadas; i++ )
  {
  Serial.println("Rodada " + String(i + 1) + ":");
  Serial.println("  Palpite: " + String (vetPalpites[i]));
  Serial.println("  Dado: " + String(vetResultados[i]));
  Serial.println("  Resultado: " + String (vetResultados[i] == vetPalpites[i] ? "Acertou!" : "Errou!"));
  Serial.println("--------------------------------");
  Serial.println();
  }//fim do for que exibe o relatorio final

  //ao finalizar, mostrar as estatisticas
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  desenhaPontinhos(3, 500);
  delay(3000);//pausa de 3 segundos para reiniciar o loop



}