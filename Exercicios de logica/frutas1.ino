/*
	1 - Melancia
    2 - Banana
    3 - Macã
    4 - Morango
    5 - Laranja
	
*/
int opcao;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha uma opçao no menu abaixo:");
  Serial.println(" 1 - Melancia");
  Serial.println(" 2 - Banana");
  Serial.println(" 3 - Maca");
  Serial.println(" 4 - Morango");
  Serial.println(" 5 - Laranja");
  Serial.println();
  
  while(!Serial.available());
  opcao = Serial.parseInt();
  
  switch(opcao) {
    case 1:
    	Serial.println("Voce escolheu a fruta MELANCIA");
    	break;
    case 2:
    	Serial.println("Voce escolheu a fruta BANANA");
    	break;
    case 3:
    	Serial.println("Voce escolheu a fruta MACA");
    	break;
	 case 4:
    	Serial.println("Voce escolheu a fruta MORANGO");
    	break;  
    case 5:
    	Serial.println("Voce escolheu a fruta LARANJA");
    	break; 
    default :
    	Serial.println("Nao temos a fruta escolhida");
  }
  
  
  delay(20000);
}