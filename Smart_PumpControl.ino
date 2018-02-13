// set water relays
int relay1 = 3;
int relay2 = 4;
int relay3 = 5;
int relay4 = 6;

// set water pump
int pump = 2;

void setup() {
  // declare relay as output
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  // declare pump as output
  pinMode(pump, OUTPUT);
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600); 

}

void loop() {
  if (Serial.available() > 0) {
  int command = Serial.read();

  if (command == '1') {//relay 1 aan
  digitalWrite(relay1, HIGH);
  Serial.println( "1=ON" );}
else {//relay 1 uit
digitalWrite(relay1, LOW);
}
  
  if (command == '2') {//relay 2 aan
  digitalWrite(relay2, HIGH);
  Serial.println( "2=ON" );}
 else {//relay 2 uit
 //relay 2 uit
digitalWrite(relay2, LOW);   
}

  if (command == '3') {//relay 3 aan
  digitalWrite(relay3, HIGH);
  Serial.println( "3=ON" );}
  else {//relay 3 uit
digitalWrite(relay3, LOW);
  }

  if (command == '4') {//relay 4 aan
  digitalWrite(relay4, HIGH);
  Serial.println( "4=ON" );}
  else {//relay 4 uit
digitalWrite(relay4, LOW);
  }
  
if (command == '9') {//pomp aan 
  digitalWrite(pump, HIGH);}
else {//pump uit
  digitalWrite(pump, LOW);
}
  }
  }
  
  
  


  


  
  
