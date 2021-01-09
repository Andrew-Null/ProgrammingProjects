#include <string.h>
class Morse
{

  private:
  int pin;
  float unit;
  
  void SB(); //short blink
  void LB(); //long blink 
  
  //int leng;    

  public:
  void OWB(); //out of word break
  void IWB(); //in word break
  
  
  //char sen[leng]; //sentence or word
  //void lout(); //light out
  
  
  //alphabet
  void A();
  void B();
  void C();
  void D();
  void E();
  void cF();
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

  //'dictionary'
  void ANDREW();
  void FRANS();
  void MIGUEL();
  void ELIJAH();
  void MERCY();
  void acrFAME();
  void PLEASE();
  void SUCK();
  void ALAN();
  void AND();
  void YOU();
  void BOTH();
    
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

void Morse::ANDREW()
{
  A();
  IWB();
  N();
  IWB();
  D();
  IWB();
  R();
  IWB();
  E();
  IWB();
  W();
  OWB();
}

void Morse::FRANS()
{
  cF();
  IWB();
  R();
  IWB();
  A();
  IWB();
  N();
  IWB();
  S();
  OWB();
}

void Morse::MIGUEL()
{
  M();
  IWB();
  I();
  IWB();
  G();
  IWB();
  U();
  IWB();
  E();
  IWB();
  L();
  OWB();
  
}

void Morse::ELIJAH()
{
  E();
  IWB();
  L();
  IWB();
  I();
  IWB();
  J();
  IWB();
  A();
  IWB();
  H();
  OWB();
  
}

void Morse::MERCY()
{
  M();
  IWB();
  E();
  IWB();
  R();
  IWB();
  C();
  IWB();
  Y();
  OWB();
}

void Morse::acrFAME() //acronym FAME
{
  FRANS();
  ANDREW();
  MIGUEL();
  ELIJAH();
}

void Morse::PLEASE()
{
  P();
  IWB();
  L();
  IWB();
  E();
  IWB();
  A();
  IWB();
  S();
  IWB();
  E();
  OWB();
}

void Morse::SUCK()
{
  S();
  IWB();
  U();
  IWB();
  C();
  IWB();
  K();
  OWB();
}

void Morse::ALAN()
{
  A();
  IWB();
  L();
  IWB();
  A();
  IWB();
  N();
  OWB();
  
}

void Morse::YOU()
{
  Y();
  IWB();
  O();
  IWB();
  U();
  OWB();
}

void Morse::BOTH()
{
  B();
  IWB();
  O();
  IWB();
  T();
  IWB();
  H();
  OWB();
}

Morse Out11(11, .25);
Morse Out12(12, .25);
Morse Out13(13, .25);
void setup() {
  // put your setup code here, to run once:
  

}

void loop() {
  // put your main code here, to run repeatedly:
  /*Out12.PLEASE();
  Out13.acrFAME();
  Out11.MERCY();
  Out13.PLEASE();
  Out11.acrFAME();
  Out12.MERCY();
  Out11.PLEASE();
  Out12.acrFAME();
  Out13.MERCY();
  Out11.E();
  Out12.E();
  Out13.E();*/

  Out11.acrFAME(); 


}
