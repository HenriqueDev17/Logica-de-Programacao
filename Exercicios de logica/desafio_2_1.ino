int numero1;
int resultado;

void setup()
{
 Serial.begin(9600); 
}

void loop()
  
{
  for(int contador = 0; contador <= 100; contador += 5){
    Serial.println(": " + String(contador));
  resultado = contador;
    delay(500);
  }

  
  delay(1200);
  
}