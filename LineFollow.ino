
#define ldrThreshold 875

uint8_t lineFollower = 0;
int data[10];

void setup() {
        Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
}

void loop()
{
        readLDRs();

}


void readLDRs()
{
        int LDR0 = analogRead(A0);
        int LDR1 = analogRead(A1);
        int LDR2 = analogRead(A2);
        int LDR3 = analogRead(A3);
        int LDR4 = analogRead(A6);
        int LDR5 = analogRead(A7);
        
         char buffer [100];
        sprintf (buffer, "{\"UL\":%u,\"UC\":%u,\"UR\":%u,\"TL\":%u,\"TC\":%u,\"TR\":%u,\"LF0\":%u,\"LF1\":%u,\"LF2\":%u,\"LF3\":%u,\"LF4\":%u,\"LF5\":%u\}", 0,0,0,0,0,0,LDR0, LDR1, LDR2, LDR3, LDR4, LDR5);
        Serial.println(buffer);
}

