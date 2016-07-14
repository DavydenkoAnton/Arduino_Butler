#define lightSensKitchen 2
#define releLightKitchen 3
#define lightSensBar 4
#define releLightBar 5

bool  checkKitchen = true ;
bool  checkBar = true ;

void setup()
{
  Serial.begin(9600);
  pinMode(lightSensKitchen, INPUT);
  pinMode(releLightKitchen, OUTPUT);
  pinMode(lightSensBar, INPUT);
  pinMode(releLightBar, OUTPUT);
}

void loop()
{
  int seconds = 30 * 100;

  motionBar(checkBar);
  motionKitchen(checkKitchen);
  checkBar = false;
  checkKitchen = false;
  for (int i = 0; i < seconds; i++) {
    if (digitalRead(lightSensBar) == HIGH) {
      checkBar = true;
      motionBar(checkBar);
    }
    if (digitalRead(lightSensKitchen) == HIGH) {
      checkKitchen = true;
      motionKitchen(checkKitchen);
    }
    delay(10);
  }
}

void motionKitchen(bool check) {
  if (check) {
    digitalWrite(releLightKitchen, HIGH);
  } else {
    digitalWrite(releLightKitchen, LOW);
  }
}

void motionBar(bool check) {
  if (check == true) {
    digitalWrite(releLightBar, HIGH);
  } else {
    digitalWrite(releLightBar, LOW);
  }
}

