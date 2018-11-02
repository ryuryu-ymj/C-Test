#pragma once
#include <random>
using namespace std;

class Npc
{
private:
	random_device rnd;
	int hand;
public:
	Npc();
	~Npc();
	void setHand();
	int getHand();
};

