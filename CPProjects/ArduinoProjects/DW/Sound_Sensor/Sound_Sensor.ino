int RED = 5;
int WHITE = 2;
int GREEN = 4;

struct Settings
{
  //int UpT, LowT; //upper threshold and lowerthreshold
  
  int thresholds[2][2] = {{30, 100}, {45, 150}}; 
  //[0][] standard settings, [1][] higher settings
  //[][0] lower threshold, [][1] upper threshold
  int  UpT = thresholds[0][1];
  int LowT = thresholds[0][0];
};

Settings Bds; //bounds

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int loudness = analogRead(A0);
  //Serial.println(loudness);
  

  digitalWrite(GREEN, LOW);
  digitalWrite(RED, LOW);
  digitalWrite(WHITE, LOW);

  if(loudness < Bds.LowT) // Too quiet
  {
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, LOW);
    digitalWrite(WHITE, HIGH);
  }
  else if(loudness > Bds.UpT) // Too loud
  {
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    digitalWrite(WHITE, LOW);
  }
  else // Just right
  {
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(WHITE, LOW);
  }
}
