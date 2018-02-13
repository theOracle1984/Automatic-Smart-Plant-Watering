// set all moisture sensors PIN ID
int moisture1 = A0;
int moisture2 = A1;
int moisture3 = A2;
int moisture4 = A3;
int moisture5 = A4;
int moisture6 = A5;

// declare moisture values
int moisture1_value = 0;
int moisture2_value = 0;
int moisture3_value = 0;
int moisture4_value = 0;
int moisture5_value = 0;
int moisture6_value = 0;

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
   
 // read the value from the moisture sensors AND Sensor output to Serial Monitor // text " " in front of moisture_value
 moisture1_value = analogRead(moisture1);
 Serial.print ("Value 1:  ");
 Serial.println(moisture1_value);
 delay(5000);
 moisture2_value = analogRead(moisture2);
 Serial.print ("Value 2:  ");
 Serial.println(moisture2_value);
 delay(5000);
 moisture3_value = analogRead(moisture3);
 Serial.print ("Value 3:  ");
 Serial.println(moisture3_value);
 delay(5000);
 moisture4_value = analogRead(moisture4);
 Serial.print ("Value 4:  ");
 Serial.println(moisture4_value);
 delay(5000);
 moisture5_value = analogRead(moisture5);
 Serial.print ("Value 5:  ");
 Serial.println(moisture5_value);
 delay(5000);
 moisture6_value = analogRead(moisture6);
 Serial.print ("Value 6:  ");
 Serial.println(moisture6_value);
 // text to devide read-outs
 Serial.println ("END");
 
 
// check which plant need water
 // and open the switch for that specific plant
 
 if(moisture1_value<=450){
  digitalWrite(relay1, HIGH);
 }
 if(moisture2_value<=450){
  digitalWrite(relay2, HIGH);
 }
 if(moisture3_value<=450){
  digitalWrite(relay3, HIGH);
 }
 if(moisture4_value<=450){
  digitalWrite(relay4, HIGH);
 }
 
 // make sure there is at least one plant that needs water
 // if there is, open the motor
 if(moisture1_value<=450 || moisture2_value<=450 || moisture3_value<=450 || moisture4_value<=450){
   digitalWrite(pump, HIGH);
 }
 
 // let it water the plant for 5 seconds
 delay(50 00);
 
 // turn the pump off
 digitalWrite(pump, LOW);
 
 // go each switch and turn them off
 digitalWrite(relay1, LOW);
 digitalWrite(relay2, LOW);
 digitalWrite(relay3, LOW);
 digitalWrite(relay4, LOW);
  
 // wait 5 minutes and repeat the process
 delay(300000);

}
