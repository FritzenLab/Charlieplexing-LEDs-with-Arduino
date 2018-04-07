

void setup() {
  // set the digital pin as output:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {

    led1();
    delay(62);
    led5();
    delay(62);
    led2();
    delay(62);
    led6();
    delay(62);
    led3();
    delay(62);
    led7();
    delay(62);
    led4();
    delay(62);
    led8();
    delay(62);
  
}

void led1(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);  
}
void led2(){
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  pinMode(5, INPUT);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);  
}
void led3(){
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);  
}
void led4(){
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);  
}
void led5(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);  
}
void led6(){
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  pinMode(5, INPUT);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);  
}
void led7(){
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);  
}
void led8(){
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);  
}

