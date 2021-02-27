#include <iostream>
#include <unistd.h>
#include <thread>
/*int main()
{
	std::thread loop1(loop);
	for(fv = 0; fv <= 10; fv += 1)
	{
		sleep(fv);
		std::cout << "main: " << fv
	}
}*/

/*int main()
{
	loop(0);
}*/

void loop(int count)
{
	count +=1;
	std::cout << "void loop:"<< count << std::endl;
	sleep(1);
}

int main()
{
	loop(0);
}
