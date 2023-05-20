// C++ code
int ledArray[] = {7, 6, 5, 4, 3, 2};
int count = 0;
int timer = 50;

void setup() {
for (count = 0; count < 6; count++) {
pinMode(ledArray[count], OUTPUT);
}
}
void loop() {
for (count = 0; count < 5; count++) {
digitalWrite(ledArray[count], HIGH);
delay(timer);
digitalWrite(ledArray[count + 1], HIGH);
delay(timer);
digitalWrite(ledArray[count], LOW);
delay(analogRead(0) / 6);
}
for (count = 5; count >= 0; count--) {
digitalWrite(ledArray[count], HIGH);
delay(timer);
digitalWrite(ledArray[count - 1], HIGH);
delay(timer);
digitalWrite(ledArray[count], LOW);
delay(analogRead(0) / 6);
}
}