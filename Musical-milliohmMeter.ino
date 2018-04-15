
// Muscial Milliohm meter by: Seyed roohollah marashi 
//(c) vitapour Gmbh Austria, Wien +43 6763832008
// http://www.marashi.eu srmarashi@yahoo.com

// ***** MCP6041 OP-AMP  pin2 and pin6 = 240Kohm   
//                       pin3 and GND  = 240Kohm

int sensorPin = A0;    // select the input pin for the potentiometer
int i = 0;
int j = 0;
int sum = 0;
void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {


  int sensorValue = analogRead(sensorPin);
  i = sensorValue  % 10;
  j = sensorValue  % 100;
  Serial.println(j);
  Serial.println(sensorValue);
  if (sensorValue < 600)
  {
    sum = (i * 100);

    tone(11, sum);
    delay(50);
    noTone(8);
    analogWrite(11, 0);
    delay(5);
  }
  noTone(11);
  analogWrite(11, 0);
  delay(5);
}
