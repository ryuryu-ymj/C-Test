#include "pch.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

Player::Player()
{
	name = "player";
}


Player::~Player()
{
}

void Player::setName()
{
	cout << "名前を入力してください>> ";
	cin >> name;
	cout << "あなたの名前は" << name << "です" << endl;
}

void Player::setHand()
{
	cout << "グーなら1，チョキなら2，パーなら3，を代入してください>> ";
	cin >> hand;
}

int Player::getHand()
{
	return hand;
}

string Player::getName()
{
	return name;
}
