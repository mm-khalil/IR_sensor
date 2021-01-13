    int IRP = A0; 
    int IRV;
void setup() 
{   pinMode(IRP,INPUT);    
    Serial.begin(9600);                     }
void loop() 
{   analogReadResolution(16);
    Serial.println(analogRead(IRP));
    delay(100);                             }
