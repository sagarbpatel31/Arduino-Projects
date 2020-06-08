void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  if(Serial.available())
  {
    int c = Serial.read();

    if(c==1)
    {
      forward();
    }
    if(c==3)
    {
      radial_left();
      delay(1000);
      forward();
    }
    if(c==4)
    {
      radial_right();  
      delay(1000);
      forward();    
    }
    if(c==2)
    {
      backward();
    }
    if(c==5)
    {
      time_stop();
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
