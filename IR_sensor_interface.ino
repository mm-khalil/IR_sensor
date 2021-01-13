float IR=A0;

float NO;
float O;
 
void setup() 
{       pinMode(13, OUTPUT); 
        pinMode(IR,  INPUT);
        Serial.begin (9600);              }
 
void loop() 
{  if (analogRead(IR) <= 255)
    {  NO=IR;
       digitalWrite(13,  LOW);       
       Serial.println(NO);     
    }   
    else if (analogRead(IR) >= 0)
    {  O=IR;
       digitalWrite  (13,   HIGH);
       Serial.println(O);        
    }   
}
