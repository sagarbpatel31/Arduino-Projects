String voice;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  Serial.begin(9600);
  digitalWrite(2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available())
  {
    delay(10);
    char c = Serial.read();
    if(c=='#')
    {
      break;
    }
    voice+=c;
  }
  if(voice.length()>0)
  {
    Serial.println(voice);
  }
  if(voice=="*light on")
  {
    lighton();
  }
  else if(voice =="*light off")
  {
    lightoff();
  }
  voice ="";
}
void lighton()
{
  digitalWrite(2,LOW);
}
void lightoff()
{
  digitalWrite(2,HIGH);
}
