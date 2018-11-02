#include "pch.h"
#include "Npc.h"
#include <random>
using namespace std;

Npc::Npc()
{
}


Npc::~Npc()
{
}

void Npc::setHand()
{
	mt19937 mt(rnd());
	uniform_int_distribution<> rand(1, 3);
	hand = rand(mt);
}

int Npc::getHand()
{
	return hand;
}
