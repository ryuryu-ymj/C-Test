#pragma once
#include <string>
using namespace std;

class Hand
{
public:
	enum outcome
	{
		Victory, Defeat, Draw
	};
	Hand();
	~Hand();
	static string getHandName(int hand);
	static outcome checkPlayerWin(int playerHand, int npcHand);
};

