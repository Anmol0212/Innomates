
int VAL=0;
int p1=5;
int p2=7;

void setup(){
  
 pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
}
     void ledstate(int pin, int state) 
    {
     digitalWrite(pin,state);
         }


void loop(){

   int mois=analogRead(VAL);
   Serial.print("Moisture is ");
  Serial.println(mois);

  if (mois>500)
   {ledstate(5,HIGH);
   ledstate(3,LOW);
   digitalWrite(p1,HIGH);
   digitalWrite(p2,LOW);
   }
   else 
   {ledstate(5,LOW);
   ledstate(3,HIGH);
    digitalWrite(p1,LOW);
    digitalWrite(p2,HIGH);
   }
   delay(2000);
}
