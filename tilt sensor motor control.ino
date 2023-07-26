int speedPin = 5;
int tiltPin = 2;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 250;
int tiltVal ;


void setup()
{
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  Serial.begin(9600);
  pinMode(tiltPin , INPUT);
  digitalWrite(tiltPin , HIGH); // to avoid uisng pull up resistor 
}

void loop()
{
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  tiltVal=digitalRead(tiltPin);
  Serial.println(tiltVal);
  if (tiltVal == 0)
  {
  analogWrite(speedPin , mSpeed);
  }
  else
  {
    analogWrite(speedPin , 0); // You can also write digital write 
  }
}