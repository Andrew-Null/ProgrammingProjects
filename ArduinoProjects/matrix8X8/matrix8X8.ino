class MC8x8 //8x8 matrix controller
{
  private:
  //pins
    int FV;
    int FVb
    int p[8]; //rows
    int g[8];  //columns

  public:
    //(de)constructor
    MC8x8(int (&rp)[8], int (&rg)[8]); //raw row and column pin numbers
    ~MC8x8();
    void tester();
  
};

MC8x8::MC8x8(int (&rp)[8], int (&rg)[8])
{

  for(FV = 0; FV < 8; ++FV)
    p[FV] = rp[FV];
    g[FV] = rg[FV];
    
  
}

MC8x8::tester()
{
  for(FV = 0; FV < 8; ++FV)
    for(FVb = 0; FV < 8; ++FVb)
    
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
