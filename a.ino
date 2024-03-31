int LDR_Val = 0;     /*Variable to store photoresistor value*/
int sensor =26;      /*Analogue Input for photoresistor*/
int led= 27;         /*LED output Pin*/
void setup() {
    Serial.begin(9600);     /*Baud rate for serial communication*/
    pinMode(led, OUTPUT);   /*LED Pin set as output */
}
void loop() {
    LDR_Val = analogRead(sensor);   /*Analog read LDR value*/
    Serial.print("LDR Output Value: ");
    Serial.println(LDR_Val);   /*Display LDR Output Val on serial monitor*/
    if(LDR_Val > 100) {       /*If light intensity is HIGH*/
        Serial.println(" High intensity ");
        digitalWrite(led,LOW); /*LED Remains OFF*/
    }
    else {
     /*Else if Light intensity is LOW LED will Remain ON*/
        Serial.println("LOW Intensity ");
        digitalWrite(led,HIGH);  /* LED Turn ON LDR value is less than 100*/
    }
    delay(1000);     /*Reads value after every 1 sec*/
}
