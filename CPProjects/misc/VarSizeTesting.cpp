#include <iostream>

int main()
{
	int a;
	std::cout << sizeof(a) << std::endl;

	typedef int SuperInt : 128;
	SuperInt b;
	std::cout << sizeof(b) << std::endl;
}

