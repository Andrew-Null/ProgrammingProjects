//Morse
class Morse
{

  private:
  int pin;
  float unit;
  
  void SB(); //short blink
  void LB(); //long blink 
  
  //int leng;    

  public:
  void OWB(); //out of word break / space
  void IWB(); //in word break
  
  
  //char sen[leng]; //sentence or word
  //void lout(); //light out
  
  
  //alphabet
  void A();
  void B();
  void C();
  void D();
  void E();
  void cF(); //class f since F() is an arduino function 
  void G();
  void H();
  void I();
  void J();
  void K();
  void L();
  void M();
  void N();
  void O();
  void P();
  void Q();
  void R();
  void S();
  void T();
  void U();
  void V();
  void W();
  void X();
  void Y();
  void Z();
  
  void blink(int pin, float on, float off);
  Morse(int SetPin, float SetUnit);
  ~Morse();
};

Morse::Morse(int SetPin, float SetUnit)
{
  unit = SetUnit;
  pin = SetPin;
  pinMode(pin, OUTPUT);
}

Morse::~Morse()
{}

/*void Morse::lout
{

  for (int x = 0; x <= len; x++)
  {

   /* if (sen[x] = 'a')
    {
      A();
    }
   
  }
  
}*/

void Morse::OWB()
{
  delay(1000 * (unit * 6));
}

void Morse::IWB()
{
  delay(1000 * (unit *2));
}

void Morse::blink(int pin,float on, float off){
  digitalWrite(pin, HIGH);
  delay(on * 1000);
  digitalWrite(pin, LOW);
  delay(off * 1000);
}

void Morse::SB()
{
  blink(pin, unit, unit);
}

void Morse::LB()
{
  blink(pin, unit * 3, unit);
}

void Morse::A()
{
  SB();
  LB();
}

void Morse::B()
{
  LB();
  SB();
  SB();
  SB();
}

void Morse::C()
{
  LB();
  SB();
  LB();
  SB();
}

void Morse::D()
{
  LB();
  SB();
  SB();
}

void Morse::E()
{
  SB();
}

void Morse::cF()
{
  SB();
  SB();
  LB();
  SB();
}

void Morse::G()
{
  LB();
  LB();
  SB();
}

void Morse::H()
{
  SB();
  SB();
  SB();
  SB();
}

void Morse::I()
{
  SB();
  SB();
}

void Morse::J()
{
  SB();
  LB();
  LB();
  LB();
}

void Morse::K()
{
  LB();
  SB();
  LB();
}

void Morse::L()
{
  SB();
  LB();
  SB();
  SB();
}

void Morse::M()
{
  LB();
  LB();
}

void Morse::N()
{
  LB();
  SB();
}

void Morse::O()
{
  LB();
  LB();
  LB();
}

void Morse::P()
{
  SB();
  LB();
  LB();
  SB();
}

void Morse::Q()
{
  LB();
  LB();
  SB();
  LB();
}

void Morse::R()
{
  SB();
  LB();
  SB();
}

void Morse::S()
{
  SB();
  SB();
  SB();
}

void Morse::T()
{
  LB();
}

void Morse::U()
{
  SB();
  SB();
  LB();
}

void Morse::V()
{
  SB();
  SB();
  SB();
  LB();
}

void Morse::W()
{
  SB();
  LB();
  LB();
}

void Morse::X()
{
  LB();
  SB();
  SB();
  LB();
}

void Morse::Y()
{
  LB();
  SB();
  LB();
  LB();
}

void Morse::Z()
{
  LB();
  LB();
  SB();
  SB();
}

//Seven Segment
class SD7 //7 segment display
{

  public:
  // con-, and decon-, -structors
    SD7(int (&pins)[8]);
    ~SD7();

    //numbers
    void uno();  //b, c
    void dos(); //a, b, g, e, d, 
    void tres(); //a, b, g, c, d
    void cuatro(); //f, g, b, c
    void cinco(); //a, f, g, c, d
    void seis(); //a, f, g, c, d, e
    void siete(); //a, b, c
    void ocho(); //all
    void nueve(); //a, f, g, b, c
    void cero(); //a, b, c, d, e, f

  
  private:
    //short hand functions
    void clear();
    void lon(int pin); //light on
    void loff(int pin); //light off
    int dly = 250; //delay
  
  // pins
  //com 3 and 8 are gorund pins
    int g, f, /*com8,*/ a, b;
    int e, d, /*com3,*/ c, dp;

};

SD7::SD7(int (&pins)[8])
{
  //match pins variables with corresponding element of array of pin numbers
  g = pins[0];
  f = pins[1];
  //com8 = pins[2]; //ground
  a = pins[2];
  b = pins[3];
  e = pins[4];
  d = pins[5];
  //com3 = pins[7]; //ground
  c = pins[6];
  dp = pins[7]; //decimal point

  //set outputs
  pinMode(g, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(dp, OUTPUT);
}

SD7::~SD7()
{}

void SD7::loff(int pin)
{
  digitalWrite(pin, LOW);
}

void SD7::clear()
{
  loff(g);
  loff(f);
  loff(a);
  loff(b);
  loff(e);
  loff(d);
  loff(c);
  loff(dp);
}

void SD7::lon(int pin)
{
  digitalWrite(pin, HIGH);
}

void SD7::uno()
{
  clear();
  delay(dly);
  lon(b);
  delay(dly);
  lon(c);
  delay(dly);
}

void SD7::dos()
{
  clear();
  delay(dly);
  lon(a);
  delay(dly);
  lon(b);
  delay(dly);
  lon(g);
  delay(dly);
  lon(e);
  delay(dly);
  lon(d);
  delay(dly);
}

void SD7::tres()
{
  clear();
  delay(dly);
  lon(a);
  delay(dly);
  lon(b);
  delay(dly);
  lon(g);
  delay(dly);
  lon(c);
  delay(dly);
  lon(d);
  delay(dly);
}

void SD7::cuatro()
{
  clear();
  delay(dly);
  lon(b);
  lon(f);
  delay(dly);
  lon(g);
  delay(dly);
  lon(c);
  delay(dly);
}

void SD7::cinco()
{
  clear();
  delay(dly);
  lon(a);
  delay(dly);
  lon(f);
  delay(dly);
  lon(g);
  delay(dly);
  lon(c);
  delay(dly);
  lon(d);
  delay(dly);
}

void SD7::seis()
{
  clear();
  delay(dly);
  lon(a);
  delay(dly);
  lon(f);
  delay(dly);
  lon(e);
  delay(dly);
  lon(d);
  delay(dly);
  lon(c);
  delay(dly);
  lon(g);
  delay(dly);
}

void SD7::siete()
{
  clear();
  delay(dly);
  lon(a);
  delay(dly);
  lon(b);
  delay(dly);
  lon(c);
  delay(dly);
}

void SD7::ocho()
{
  clear();
  delay(dly);
  lon(a);
  delay(dly);
  lon(g);
  delay(dly);
  lon(d);
  delay(dly);
  lon(c);
  lon(e);
  delay(dly);
  lon(f);
  lon(b);
  delay(dly);
}

void SD7::nueve()
{
  clear();
  delay(dly);
  lon(a);
  delay(dly);
  lon(f);
  lon(b);
  delay(dly);
  lon(g);
  delay(dly);
  lon(c);
  delay(dly);
}

void SD7::cero()
{
  clear();
  lon(a);
  delay(dly);
  lon(b);
  lon(f);
  delay(dly);
  lon(e);
  lon(c);
  delay(dly);
  lon(d);
  delay(dly);
}


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
