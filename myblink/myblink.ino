/*demo
 * my blink program
 */
int ledPin = 11;
void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  analogWrite(ledPin, 20);
  delay(500);
analogWrite(ledPin,0);
  delay(500);
}
