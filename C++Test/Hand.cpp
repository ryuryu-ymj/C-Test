#include "pch.h"
#include "Hand.h"


Hand::Hand()
{
}


Hand::~Hand()
{
}

string Hand::getHandName(int hand)
{
	switch (hand)
	{
	case 1:
		return "�O�[";
	case 2:
		return "�`���L";
	case 3:
		return "�p�[";
	default:
		return "�H";
	}
}

Hand::outcome Hand::checkPlayerWin(int playerHand, int npcHand)
{
	switch (playerHand - npcHand)
	{
	case 0:
		return Draw;
	case -1:
	case 2:
		return Victory;
	case 1:
	case -2:
		return Defeat;
	}
	return Defeat;
}
