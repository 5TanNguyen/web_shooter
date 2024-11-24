// cam bien van tay
int Touch_Sensor = A5;
int LED = 13;
int Relay = 4;

int condition = 0;
int state = 0;

void setup() {
  // cam bien van tay
  pinMode(Touch_Sensor, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Relay, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 // cam bien van tay
 condition = digitalRead(A5);
 if(condition == 1){
    delay(300); 
    if(condition == 1){
      state = ~state;
      digitalWrite( LED, state);
      digitalWrite(Relay, state);
    }
  }
}
