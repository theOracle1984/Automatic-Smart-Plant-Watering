int relay1 = 3;
int relay2 = 4;
int relay3 = 5;
int relay4 = 6;
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

    if (command == '1') {//pump+relay 1 aan
      digitalWrite(pump, HIGH);
      digitalWrite(relay1, HIGH);
      // let it water the plant for 5 seconds
      delay(5000);
    }
    else {// turn the pump off
      digitalWrite(pump, LOW);
      digitalWrite(relay1, LOW);
    }

    if (command == '2') {//pump+relay 2 aan
      digitalWrite(pump, HIGH);
      digitalWrite(relay2, HIGH);
      // let it water the plant for 5 seconds
      delay(5000);
    }
    else {// turn the pump off
      digitalWrite(pump, LOW);
      digitalWrite(relay1, LOW);
    }

    if (command == '3') {//pump+relay 3 aan
      digitalWrite(pump, HIGH);
      digitalWrite(relay3, HIGH);
    }
    // let it water the plant for 5 seconds
    delay(5000);
  }
  else {// turn the pump off
    digitalWrite(pump, LOW);
    digitalWrite(relay1, LOW);
  }

  if (command == '4') {//pump+relay 4 aan
    digitalWrite(pump, HIGH);
    digitalWrite(relay4, HIGH);
  }
  // let it water the plant for 5 seconds
  delay(5000);
}
else {// turn the pump off
  digitalWrite(pump, LOW);
  digitalWrite(relay1, LOW);
}
}


