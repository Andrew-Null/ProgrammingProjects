#include <iostream>

int main()
{
	int aryO[3] = {1, 2, 3};
	int aryT[3];


	std::cout << aryO << "\n" << aryT <<"\n\n";

	int* aryOP = (&aryO)
	aryT[3] = (&aryO)[3];

	std::cout << aryO << "\n" << aryT << "\n";
}
