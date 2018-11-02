#pragma once
#include <string>
using namespace std;

class Player
{
private:
	/* 名前 */
	string name;
	/* 手 グーなら1，チョキなら2，パーなら3 */
	int hand;
public:
	Player();
	~Player();
	/* プレイヤーの名前を設定する */
	void setName();
	void setHand();
	int getHand();
	string getName();
};

