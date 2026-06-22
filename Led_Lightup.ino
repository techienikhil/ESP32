int ledPin = 2;

void setup ()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);

}
void loop () {
    Serial.print("On");
    digitalWrite(ledPin, HIGH);
    delay(500);
    Serial.println("Off");
    digitalWrite(ledPin, LOW);
    delay(500);
}