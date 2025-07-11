
int potPin = 0; // define UNO board A0 pin connect the potentiometer
  
void setup() { 
  // Start the serial port, baud rate to 9600
  Serial.begin(9600); 
} 
  
void loop() { 
  // Read the potentiometer voltage
  int sensorValue = analogRead(potPin);   
  //Because the processing 'serial.read()' only support the value between 0-255, 
  //so you need to put a scale of 0-1023 numerical scale between 0-255
  int Voltage = map(sensorValue,0,1023,0,255); 
  Serial.write(Voltage);  
  delay(100); 
} 

