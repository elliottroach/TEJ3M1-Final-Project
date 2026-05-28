// Made by Elliott
// Made May 2026
// Gose throgh the truth table for a 1/2 adder

int pin0 = 0;
int pin1 = 1;

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(pin0, OUTPUT);
    pinMode(pin1, OUTPUT);

}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(pin0, LOW);
    digitalWrite(pin1, LOW);

    int aOne = 0;

    int bOne = 0; 

    for (aOne = 0; aOne < 2; aOne++) {
        for (bOne = 0; bOne < 2; bOne++) {
            digitalWrite(pin0, aOne);
            digitalWrite(pin1, bOne);
            Serial.print ("A1 = " + string(aOne) + "\n");
            Serial.print (aOne);
            Serial.print ("B1 = ");
            Serial.print (bOne);
            Serial.print (aOne);
            Serial.print (" + ");
            Serial.print (bOne);
            Serial.print (" = ");
            Serial.print (aOne + bOne);
            delay(1000);
            
        }
    }
}
