#include <iostream>

int AddInt(int one, int two, int three)
{
	return one + two + three;
}

int main()
{
	std::cout << "hello\n";
	std::cout << "the sum of 123, 456, and 789 is: "<<AddInt(123, 456, 789);

	return 0;
}
