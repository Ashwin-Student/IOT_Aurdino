#include <Arduino.h>

#define RED_LED 8
#define YELLOW_LED 9
#define GREEN_LED 10

void setup() {
  
    pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
}

void loop() {
 
    digitalWrite(RED_LED, HIGH);
    delay(5000);
    digitalWrite(RED_LED, LOW);


    digitalWrite(YELLOW_LED, HIGH);
    delay(2000);
    digitalWrite(YELLOW_LED, LOW);


    digitalWrite(GREEN_LED, HIGH);
    delay(5000);
    digitalWrite(GREEN_LED, LOW);
}


int main(void) {
    init();              
    setup();             

    while (1) {
        loop();        
    }

    return 0;
}
