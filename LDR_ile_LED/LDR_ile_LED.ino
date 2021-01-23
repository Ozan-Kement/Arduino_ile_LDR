#define led 3

#define LDR A0
int isik = 0;


void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  isik = analogRead(LDR);
  Serial.println(isik);
  delay(50);

  if(isik > 630){
    digitalWrite(led, LOW);
  }

  if(isik < 430){
    digitalWrite(led, HIGH);
  }

}
