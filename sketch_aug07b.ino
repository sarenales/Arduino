int brillo=0;
int incremento=5;
int ledPin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin,brillo);
  brillo=brillo+incremento;
  if(brillo==0 || brillo==255){
    incremento=-incremento;
  }
  delay(30);
}
