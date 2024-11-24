#define D13 13
#define D4  4
#define D9  9

// cam bien van tay
int Touch_Sensor = A5;
int LED = D13;
int Relay = D4;
int condition = 0;
int state = 0;

// cam bien hong ngoai
int IRSensor = A2;
int IRLed = D9;

void setup() {
  // cam bien van tay
  pinMode(Touch_Sensor, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Relay, OUTPUT);

  // camm bien hong ngoai
  pinMode(IRSensor, INPUT);
  pinMode(IRLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int statusSensor = analogRead(IRSensor);
  if(statusSensor > 1000){
    digitalWrite(IRLed, LOW);
  }else{
    digitalWrite(IRLed, HIGH);
  }


 // cam bien van tay
 condition = digitalRead(A5);
 if(condition == 1){
    delay(300); 
    if(condition == 1){
      state = ~state;
      // digitalWrite( LED, state);
      digitalWrite( LED, 1);
      // digitalWrite(Relay, state);
      digitalWrite(Relay, 1);
    }
  }
}
