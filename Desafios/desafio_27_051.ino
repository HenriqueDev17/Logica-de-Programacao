// C++ code
//

/*
    Função que desenha o cabeçalho, pula uma linha e aguarda
    2000 milissegundos a finalizar
*/

#include <Servo.h>
Servo motor;


int ledVerde = 10;
int ledVermelho = 7;
int ledAzul = 4;
int ledAzul2 = 3;
int ledAzul3 = 2;
int numeroDoDado;
int numero = 0;
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
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
  motor.attach(12);
  motor.write(0);
}

void loop()
{
 desenhaCabecalho();//desenha o cabeçalho na tela

 
  //solicita o palpite do usuario
  Serial.println("Diga seu palpite de 1 a 6: " );
  while(!Serial.available());
  int numeroDoDado = Serial.parseInt();
  ledVerde = Serial.parseInt();
  

  //jogar o dado - //sorteia um numero de 1 até 7 - 1 ou seja, 6
  int numeroSorteado = random(1, 7);//numero entre 1 e 6
  Serial.print("Jogando o dado ");
  desenhaPontinhos();
  {

  //exibir o palpite do usuario
  Serial.println("Seu palpite foi: " + String(numeroDoDado));
    
delay(1000);
 
  //exibir o numero sorteado
  Serial.println("numero do dado: " + String(numeroSorteado));

  }
 //valida o resultado
  if(numeroDoDado == numeroSorteado)
  {
  Serial.println("Parabens, voce acertou!!");
  } else if(ledVerde, HIGH){
    digitalWrite(ledVerde, HIGH);
    delay(1000);
    digitalWrite(ledVerde, LOW);
  } else if (ledAzul, HIGH) {
    digitalWrite(ledAzul, HIGH);
  } else if (ledAzul2, HIGH) {
    digitalWrite(ledAzul2, HIGH);
  } else if (ledAzul3, HIGH) {
    digitalWrite(ledAzul3, HIGH);
    delay(1000);
  } else {
        motor.write(0);
  delay(1500);
  motor.write(90);
  delay(1500);
  motor.write(180);
  delay(1500);
  motor.write(90);
  delay(1500);
  }
  Serial.println("Que pena, tente outra vez!!");
    digitalWrite(ledVermelho, HIGH);
    delay(1000);
    digitalWrite(ledVermelho, LOW);
  {
  }
  {
   Serial.println("Reiniciando o programa...");
  Serial.println();
  delay(700);

    
  }
  }
    
    
    
    
    
    
    
    
    
    
    
  
