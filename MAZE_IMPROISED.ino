long irL,irM1,irR,irF;
void setup() {
  //wheels
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  //IR sensors
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
}

void loop() 
{
    irL=digitalRead(6);
    irM1=digitalRead(7);
    irR=digitalRead(9);
    irF=digitalRead(10);
    delay(10);
    if(irM1==1&&irL==0&&irR==0&&irF==1) //forward
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
    }
    if(irM1==1&&irL==1&&irR==0&&irF==0) //left path
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
    }
    if(irM1==1&&irL==0&&irR==1&&irF==0) //right path
    {
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
    }
    if(irM1==1&&irL==1&&irR==1&&irF==0)//T path
    {
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
    }
    if(irM1==0&&irL==0&&irR==0&&irF==0)//End of Path
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
    }
    if(irM1==1&&irL==1&&irR==1&&irF==1)//Crossing
    {
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
    }
}
  
