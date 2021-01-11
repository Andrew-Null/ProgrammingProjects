void blink(int pin,float on, float off){
  digitalWrite(pin, HIGH);
  delay(on * 1000);
  digitalWrite(pin, LOW);
  delay(off * 1000);
}

class Morse
{
  public:
  void MorA
}

void MorIWB() {
  delay(2000);
}

void MorOWB() {
  delay(6000);
}

void MBL(int pin) {
  blink(pin, 3, 1);
}

void MBS(int pin) {
  blink(pin, 1, 1);
}

void MorA(int pin) {
  MBS(pin);
  MBL(pin);
}

void MorD(int pin) {
  MBL(pin);
  MBS(pin);
  MBS(pin);
}

void MorE(int pin) {
  MBS(pin);
}

void MorF(int pin) {
  MBS(pin);
  MBS(pin);
  MBL(pin);
  MBS(pin);
}

void MorR(int pin) {
  MBS(pin);
  MBL(pin);
  MBS(pin);
}

void MorN(int pin) {
  MBL(pin);
  MBS(pin);
}

void MorO(int pin) {
  blink(pin, 2, .5);
  blink(pin, 2, .5);
  blink(pin, 2, .5);
}

void MorS(int pin) {
  blink(pin, 1, .5);
  blink(pin, 1, .5);
  blink(pin, 1, .5);
}

void MorW(int pin)

void MorSOS(int pin) {
  MorS(pin);
  MorO(pin);
  MorS(pin);
}

void MorFRANS(int pin) {
  MorF(pin);
  MorIWB();
  MorR(pin);
  MorIWB();
  MorA(pin);
  MorIWB();
  MorN(pin);
  MorIWB();
  MorS(pin);
  MorOWB();
}

void MorAndrew(int pin) {
  MorA(pin);
  MorIWB();
  MorN(pin);
  MorIWB();
  MorD(pin);
  MorIWB();
  MorR(pin);
  MorIWB();
  MorE(pin);
  MorIWB();
  MorW(pin);
  MorOWB();
}

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  //pinMode(12, OUTPUT);
  //pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  MorFRANS(11);


}
