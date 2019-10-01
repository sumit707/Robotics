int lmt1 = 5;
int lmt2 = 3;
int rmt1 = 6;
int rmt2 = 11;
void setup() {
  pinMode(lmt1, OUTPUT);
  pinMode(lmt2, OUTPUT);
  pinMode(rmt1, OUTPUT);
  pinMode(rmt2, OUTPUT);
}

void loop() {
  forward();
  delay(1000);
  reverse();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
  stpleft();
  delay(1000);
  stpright();
  delay(1000);
  stp();
  delay(1000);
}
void forward()
{
  analogWrite(lmt1, 150);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 150);
  analogWrite(rmt2, 0);
}
void reverse()
{
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 150);
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 150);
}
void left()
{
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 150);
  analogWrite(rmt1, 150);
  analogWrite(rmt2, 0);
}
void right()
{
  analogWrite(lmt1, 150);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 150);
}
void stp()
{
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 0);
}
void stpleft()
{
  analogWrite(lmt1, 0);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 150);
  analogWrite(rmt2, 0);
}
void stpright()
{
  analogWrite(lmt1, 150);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 0);
  analogWrite(rmt2, 0);
}


