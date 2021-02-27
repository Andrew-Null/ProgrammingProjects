#include <unistd.h>
#include <iostream>
int main()
{
	std::cout << "start" << std::endl;
	sleep(5);
	std::cout << "end" << std::endl;
}
