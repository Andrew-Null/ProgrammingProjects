#include <iostream>
#include <unistd.h>

int main()
{
	int wl, fl; //while loop, for loop
	
	while (true)
	{
		wl += 1;

		for (fl = 1; fl <= wl; fl +=1)
		{
			sleep(60 * wl);
			std::cout << "\a" << fl << " / " << wl << std::endl;
		}
	}
}
