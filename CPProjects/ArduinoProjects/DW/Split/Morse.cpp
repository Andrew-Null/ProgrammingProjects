#define ARDUINO_H
#include "DW.h"

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
