#include <iostream>
#include <unistd.h>
#include <thread> // use -lpthread in g++
#include <cmath>

struct GV
{
	bool done = true;
	int dt = 60, rt = 60, tt = 15; //delay time, running time, terminating time
	int et = 0, etm = 0, eto = 0; //expedite terminate, et modifier, et on
};
GV gv;
void pavlov()
{
	int wl, fl, lcd; //while loop, for loop, local calculated delay
	gv.done = true;
	gv.dt = gv.rt;
	while (gv.done == true)
	{
		wl += 1;
		for (fl = 1; fl <= wl; fl +=1)
		{
			gv.et += gv.etm;

			lcd = std::abs((gv.dt * wl) - (gv.et * gv.eto));

			std::cout << fl << "/" << wl << " " << lcd << "\a" << std::endl;
			sleep(lcd);
		}
	}

}

int main()
{
	std::thread lp(pavlov);
	
	//char trash;
	std::cin.get();
	std::cout << "terminating" << std::endl;
	gv.done = false;
	gv.dt = gv.tt;
	gv.etm = 1, gv.eto = 1;
	lp.join();

}
