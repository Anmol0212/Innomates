
int VAL=0;
int p1=3;
int p2=7;
const int m1  = 5;    
const int m2  = 6;    



int r = 2;
int RainVal;
int IsRaining;
String strRaining;
 

void setup(){
  
 pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  
  pinMode(2,INPUT);

     pinMode(m1, OUTPUT);
    pinMode(m2, OUTPUT);
   
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
   
   }
 
  RainVal = analogRead(A1);
  IsRaining = digitalRead(r);
 
  if(RainVal<400){
    strRaining = "YES";

    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
     delay(5000);
   
 digitalWrite(m1,LOW);
   digitalWrite(m2,LOW);
   delay(6000);
      if(RainVal>500){ digitalWrite(m1,LOW);
                     digitalWrite(m2,HIGH);}     
  }
  else{
    strRaining = "NO";
     digitalWrite(m1,LOW);
      digitalWrite(m2,LOW);
  
   
  }
 
  Serial.print("Raining: ");
  Serial.print(strRaining);  
  Serial.print(" Moisture Level: ");
  Serial.println(RainVal);  
  
 
   delay(2000);
}
