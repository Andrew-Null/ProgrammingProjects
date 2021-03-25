#pragma once
#include "CYS.h"
struct stat
{
	//current
	int CHealth;
	//max
	unsigned int MHealth;

	int Attack;
};



struct location
{
	int x, y;
};

struct info
{
	stat block;
	//gene tics;
};

struct slot
{
	auto contents;
};

struct count
{
	unsigned cpiece = 0; // current pieces
	unsigned tpiece = 0;
} tracker;
