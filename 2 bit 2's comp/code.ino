// Made by Elliott
// Made May 2026
// Goes through the truth table for a 2 bit adder

// pin 7 = B bit one
// pin 6 = A bit one
// pin 13 = carry in
// 1's
int pin7 = 7;
int pin6 = 6;
int pin13 = 13;
// 2's
int pin2 = 2;
int pin3 = 3;


void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    // 1's
    pinMode(pin7, OUTPUT);
    pinMode(pin6, OUTPUT);
    // carry/subtract
    pinMode(pin13, OUTPUT);
    // 2's
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
}


void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(pin7, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(pin13, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    const int onesColom = 1;
    const int twosColom = -2;

    // base 2
    int aOne = 0;
    int aTwo = 0;
    int bOne = 0;
    int bTwo = 0; 
    int cIn = 0;

    // bace 10
    int fullDesamalValue = 0;
    int bDesamalValue = 0;
    int aDesamalValue = 0;
    int aOneDesamal = 0;
    int bOneDesamal = 0;
    int aTwoDesamal = 0;
    int bTwoDesamal = 0;

    for (aTwo = 0; aTwo < 2; aTwo++) {
        for (bTwo = 0; bTwo < 2; bTwo++) {
            for (aOne = 0; aOne < 2; aOne++) {
                for (bOne = 0; bOne < 2; bOne++) {
                    digitalWrite(pin6, aOne);
                    digitalWrite(pin7, bOne);
                    digitalWrite(pin2, aTwo);
                    digitalWrite(pin3, bTwo);
                    Serial.print ("A = " + String(aTwo) + String(aOne) + "\n");
                    Serial.print ("B = " + String(bTwo) + String(bOne) + "\n");

                    aDesamalValue = (aTwo * twosColom) + (aOne * onesColom);
                    bDesamalValue = (bTwo * twosColom) + (bOne * onesColom);

                    fullDesamalValue = aDesamalValue + bDesamalValue;

                    Serial.print (String(aDesamalValue) + " + " + String(bDesamalValue) + " = " + String(fullDesamalValue) + "\n\n");
                    delay(2000);

                    // reseting
                    aOneDesamal = 0;
                    aTwoDesamal = 0;
                    bOneDesamal = 0;
                    bTwoDesamal = 0;
                }
            }
        }
    }
}
