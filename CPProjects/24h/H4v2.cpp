#include <iostream>

class Grader
{
	public:
		float correct, max, percent, info[2];
		int PercentInt;
		//get the number of correct and total number of questions
		void GetInfo();
		//calculate percent and PercentInt
		void GetPercent();
		//DisplayResults
		void FinalResult();
	private:
		//print all variables
		void Debugger();
		bool RunDebug = false;
};

void Grader::Debugger()
{
	if (RunDebug == true)
	{
		std::cout << "correct: " << correct << "\n";
		std::cout << "max: " << max << "\n";
		std::cout << "percent: " << percent << "\n";
		std::cout << "PercentInt: " << PercentInt << "\n";
	}
}

void Grader::GetInfo()
{
	std::cout << "how many are correct: ";
	std::cin >> correct;
	std::cout << "\n" << "out of: ";
	std::cin >> max;
	Debugger();
	GetPercent();
}

int main()
{
	Grader GR1;
	GR1.GetInfo();
	GR1.FinalResult();
}

void Grader::GetPercent()
{
	percent = correct/max;
	PercentInt = percent * 100;
	Debugger();
}

void Grader::FinalResult()
{
	std::cout << correct << " / " << max << " is " << PercentInt << "%\n";
}
