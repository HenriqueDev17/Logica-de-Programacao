int numero1;
int resultado;

void setup()
{
 Serial.begin(9600); 
}

void loop()
  
{
  for(int contador = 60; contador <= 80; contador += 2 ){
    Serial.println("contador par:  " + String(contador));
    delay(500);
  }
  
  for(int contador = 81; contador <= 101; contador += 2){
  Serial.println("contador impar: " + String(contador));
    delay(500);
  }

  
  delay(1200);
  
}