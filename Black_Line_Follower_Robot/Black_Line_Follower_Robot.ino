int a,b;

void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
}
void loop() { 
  a=digitalRead(8);
  b=digitalRead(9);
  if(a==HIGH && b ==HIGH)
  {
    forward();
  }
  else if (a==LOW && b==HIGH)
  {
    radial_right();
  }
  else if (a==HIGH && b==HIGH)
  {
    radial_left();
  }
  else if (a==LOW && b==LOW)
  {
    time_stop();
  }
  
}
void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW); 
  
}
void backward()
{
   
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}

void radial_left()
{
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}

void radial_right()
{
   digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
void time_stop()
{
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  
}
