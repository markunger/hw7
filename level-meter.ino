int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin1 = 13;   // select the pin for the LED
int ledPin2 = 12;
int ledPin3 = 11;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  if (sensorValue > 250){
  digitalWrite(ledPin3, HIGH);
  }else{
  digitalWrite(ledPin3, LOW);
  }if (sensorValue > 500){
  digitalWrite(ledPin2, HIGH);
  }else{
  digitalWrite(ledPin2, LOW);
  }if (sensorValue > 900){
  digitalWrite(ledPin1, HIGH);
  }else{
  digitalWrite(ledPin1, LOW);
  }
}
