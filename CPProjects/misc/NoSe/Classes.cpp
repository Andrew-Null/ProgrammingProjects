#include "Structs.h"
#include "CYS.h"



class piece
{
	pubic:
		std::string id;
		piece();
		~piece();
};

piece::piece()
{
	std::cout << "piece constructor starting . . ." << std::endl;
	tracker.tpiece++;
	tracker.cpiece++;
}

piece::~piece()
{
	std::cout << "piece deconstructor" << std::endl;

	tracker.cpiece--;
};

class character : piece
{
private:
	stat block;

public:
	character();
	//sh - stat health
	//sa - stat attack
	//se - stat energy
	~character();
};

character::character()
{

};

class Game
{
	private:
		const unsigned int size;
		slot board[size][size];

	public:
		Game(unsigned int size);

};

Game::Game(unsigned int rsize)
{
	const size = rsize;
}
