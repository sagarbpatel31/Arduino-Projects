void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  forward();
  delay(2000);
  radial_left();
  delay(700);
  forward();
  delay(2000);
  radial_left();
  delay(700);
  forward();
  delay(2000);
  radial_left();
  delay(700);
  forward();
  delay(700);
  time_stop();
  delay(1/0);
}

void forward()
{
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  
}
void backward()
{
  digitalWrite(1,HIGH);
  digitalWrite(0,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);  
}

void radial_left()
{
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(2000); 
}

void radial_right()
{
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
void time_stop()
{
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  
}
