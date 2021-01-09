#include <iostream>

//float info[2] ={};
float correct, max;

void GetInfo()
{
	//float correct, max;
	std::cout << "how many are correct:";
	std::cin >> correct;
	std::cout << correct << "\nout of?";
	std::cin >> max;
	std::cout << max << "\n\n";
	//info[0] = correct;
	//info[1] = max;
	//float info[2] = {correct, max};
	std::cout << correct / max << " : " << correct / max << "\n";
	//return info[2];
}

void DecideResults(float correct, float max)
{
	//float PerInt; correct = info[0], max = info[1];
	std::cout << correct << ":::" << max;// << ":::" << correct << ":::" << max << "\n";
	//PerInt = info[0] * (info[1] / 100);
	std::cout << correct << "/" << max <<"\n" << correct / max << "\n";

}

int main()
{
	//float info[2];
	//float test = ((30 / 20) * 100);
	//std::cout << "start " << test << " end\n";
	//info[2] = GetInfo();
	std::cout << max << " :: " << correct << "\n";
	DecideResults(correct, max);
}
