
int VAL=0;
int p1=3;
int p2=7;
const int m1  = 5;    
const int m2  = 6;    
//Motor B
const int m3  = 9;  
const int m4  = 8;


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
  Serial.begin(9600);
  pinMode(2,INPUT);

     pinMode(m1, OUTPUT);
    pinMode(m2, OUTPUT);
    pinMode(m3, OUTPUT);
    pinMode(m4, OUTPUT);
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
