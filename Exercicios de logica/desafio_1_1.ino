int numero1;
int resultado;

void setup()
{
 Serial.begin(9600); 
}

void loop()
  
{
  for(int contador = 5; contador >= 0; contador -= 1){
    Serial.println(":  " + String(contador));
    delay(500);
  }
 
  
  delay(1200);
  
}