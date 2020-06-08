void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  Serial.println("Robot is ready");
  
}

void loop() {
  if(Serial.available())
  {
    char c = Serial.read();

    if(c=='w' || c=='W')
    {
      forward();
      Serial.println("FORWARD");
    }
    if(c=='a' || c=='A')
    {
      radial_left();
      Serial.println("RADIAL LEFT TURN");
    }
    if(c=='d' || c=='D')
    {
      radial_right();      
      Serial.println("RADIAL RIGHT TURN");
    }
    if(c=='x' || c=='X')
    {
      backward();
      Serial.println("BACKWARD");
    }
    if(c=='s' || c=='S')
    {
      time_stop();
      Serial.println("STOP");
    }
     
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
