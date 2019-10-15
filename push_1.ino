
int VAL=0;
int p1=3;
int p2=7;
const int m1  = 5;    
const int m2  = 6;  
int flag=1;
int flag2=0;
int dur=0;  



int r = 2;
int RainVal;
int IsRaining;
String strRaining;
 

void setup(){
 
 pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
 
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
 
  pinMode(2,INPUT);
 

     pinMode(m1, OUTPUT);
    pinMode(m2, OUTPUT);
   
}
     void ledstate(int pin_a, int state_b)
    {
     digitalWrite(pin_a,state_b);
         }

  /* void mtr(int pin1,int state1,int pin2,int state2){

   }

 /* void mtr(int pin,int state){
      digitalWrite(pin,state);
      digitalWrite(pin,state);*/
   

void loop(){

   int mois=analogRead(VAL);
   Serial.print("Moisture is ");
  Serial.println(mois);

  if (mois>800)
   {ledstate(8,HIGH);
   ledstate(10,LOW);
   digitalWrite(p1,HIGH);
   digitalWrite(p2,LOW);
   }
   else
   {ledstate(8,LOW);
   ledstate(10,HIGH);
   digitalWrite(p1,LOW);
   digitalWrite(p2,LOW);
   }
 
  RainVal = analogRead(A1);
  Serial.print("RAin val=");
  Serial.println(RainVal);
  IsRaining = digitalRead(r);
 
  if(RainVal<400 && flag)
  {
    strRaining = "YES";
            digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    delay(5000);
    flag=0;
    flag2=1;
   
            digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
   
   
 
    }

    if(RainVal>500 && flag2)
    {
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    strRaining = "NO";
    delay(5000);
    flag2=0;
    flag=1;
   
            digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    }
 
  Serial.print("Raining: ");
  Serial.print(strRaining);  
  Serial.print(" Moisture Level: ");
  Serial.println(RainVal);  
 
 
   delay(2000);
}

