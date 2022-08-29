#define SW 4
#define SW1 2
#define LED 8
#define LED1 13

void setup() {
  // put your setup code here, to run once:
    pinMode(SW,INPUT);
     pinMode(SW1,INPUT);
    pinMode(LED,OUTPUT);
    pinMode(LED1,OUTPUT);
}

void loop() {
 int val1 = digitalRead(SW);
 int val2 = digitalRead(SW1);
if(val1==HIGH){
  digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
    }
 if(val2==HIGH){
  digitalWrite(LED1,HIGH);
  }
  else{
    digitalWrite(LED1,LOW);
    }
}
