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
		};
	};

};

