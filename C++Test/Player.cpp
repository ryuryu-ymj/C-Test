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
	cout << "���O����͂��Ă�������>> ";
	cin >> name;
	cout << "���Ȃ��̖��O��" << name << "�ł�" << endl;
}

void Player::setHand()
{
	cout << "�O�[�Ȃ�1�C�`���L�Ȃ�2�C�p�[�Ȃ�3�C�������Ă�������>> ";
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
