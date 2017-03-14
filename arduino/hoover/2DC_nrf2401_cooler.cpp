//# hoover

int IN1 = 2; // Input1 подключен к выводу 2 
int IN2 = 3;
int IN3 = 4;
int IN4 = 7;
int ENA = 6;
int ENB = 5;
int i;
void setup()
{
  pinMode (ENA, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (IN3, OUTPUT);
  
  pinMode (13, OUTPUT);
  
 
}
void loop()
{
  
  digitalWrite (IN2, HIGH);
  digitalWrite (IN1, LOW); 
  digitalWrite (IN4, HIGH);
  digitalWrite (IN3, LOW); 

analogWrite(ENA, 150);
      analogWrite(ENB, 150);
      delay(3000);



  /*
  for (i = 50; i <= 180; ++i)
  {
      analogWrite(ENA, i);
      analogWrite(ENB, i);
      delay(30);
  }
  analogWrite (ENA, 0);
  analogWrite (ENB, 0);
  delay(500);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW); 
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  for (i = 50; i <= 180; ++i)
  {
      analogWrite(ENA, i);
      analogWrite(ENB, i);
      delay(30);
  }
  analogWrite (ENA, 0);
  analogWrite (ENB, 0);
  delay(8000);
  */
}
