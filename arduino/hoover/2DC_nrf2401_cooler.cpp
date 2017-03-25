//# hoover

int IN1 = 2; // Input1 подключен к выводу 2
int IN2 = 4;
int IN3 = 5;
int IN4 = 7;
int ENA = 3;
int ENB = 6;
int i;
// задаем константы
const int buttonPin = 8;     // номер входа, подключенный к кнопке
const int ledPin =  13;      // номер выхода светодиода

// переменные
int buttonState = 0;         // переменная для хранения состояния кнопки


void setup()
{
  pinMode (ENA, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (IN3, OUTPUT);

  pinMode (13, OUTPUT);
  // инициализируем пин, подключенный к кнопке, как вход
  pinMode(8, INPUT);


}
void loop()
{


  // считываем значения с входа кнопки
  buttonState = digitalRead(buttonPin);

  // проверяем нажата ли кнопка
  // если нажата, то buttonState будет HIGH:
  if (buttonState == HIGH) {
    wall();
  }
  else {
    go();
  }

}

void go() {
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  analogWrite(ENA, 80);
  analogWrite(ENB, 80);
}

void wall() {
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2,LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  analogWrite(ENA, 85);
  analogWrite(ENB, 90);
  delay(500);
  digitalWrite (IN3,LOW);
  digitalWrite (IN4, HIGH);
  delay(1200);
}
