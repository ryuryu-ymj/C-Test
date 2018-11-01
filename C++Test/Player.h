#pragma once
#include <string>
using namespace std;

class Player
{
private:
	/* 名前 */
	string name;
public:
	Player();
	~Player();
	/* プレイヤーの名前を設定する */
	void setName();
	int getHand();
};

