#ifndef DW_H
#define DW_H

#include <Arduino.h>

namespace DW //decibel watch
{
	//volume
	float Ambient;
	float Current;
		
//	void UpDly();

	namespace Lights
	{
		class Morse
		{
			public:
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
		};

		class SD7 //seven segment display
		{
			public:
				//structors
				SD7(int (&pins)[8]);
				~SD7();

				void uno();
				void dos();
				void tres();
				void cuatro();
				void cinco();
				void seis();
				void siete();
				void ocho();
				void nueve();
				void cero();

			private:
				void clear();
				void lon(int pin);
				void loff(int pin);

				int dly;
				int a, b, c, d, e, f, g;

		};
	};

};
#endif
