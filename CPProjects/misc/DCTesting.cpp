#include <iostream>

namespace space
{
	class Tester
	{
		public:
		Tester();
		~Tester();
	};
	Tester prueba;
}

space::Tester::Tester()
{
	std::cout << "ctester";
}
space::Tester::~Tester()
{
	std::cout << "dtester";
}


class base
{
	public:
	base(int a);
	~base();
};

base::base(int a)
{
	std::cout << "cbase:";
}
base::~base()
{
	std::cout << "dbase:";
}
class derive : public base
{
	public:
	derive(int a, int b);
	~derive();
};
derive::derive(int a, int b) : base(a)
{
	std::cout << "cderive:";
}
derive::~derive()
{
	std::cout << "dderive";
}

int main()
{
	derive test(1,2);
}
