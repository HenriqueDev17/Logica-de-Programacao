// Faça um programa que receba um número
// e exiba o seu dobro

// Variáveis
int numero = 0;
int dobro = 0;

void setup()
{
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop()
{
  //Cabeçalho - 2 pipes + 30 tracinhos
  Serial.println( "|------------------------------|" );
  Serial.println( "|                              |" );
  Serial.println( "|        LOPAL-EX_2            |" ); 
  Serial.println( "|                              |" );
  Serial.println( "|------------------------------|" );
  
  // Entrada
  Serial.println("Digite um numero:");
  while (!Serial.available()) {}         // Aguarda o usuario digitar
  numero = Serial.parseInt();          // Lê o número digitado
  delay(500);                          // Pequeno delay para garantir leitura correta
  
  // Processamento
  dobro = numero * 2;                  // Calcula o dobro do número
  
  // Saída
  Serial.print("O dobro de ");
  Serial.print(numero);
  Serial.print(" eh: ");
  Serial.println(dobro);
  
  delay(5000); // Aguarda 5 segundos antes de permitir nova entrada
}