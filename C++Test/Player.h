#pragma once
#include <string>
using namespace std;

class Player
{
private:
	/* ���O */
	string name;
public:
	Player();
	~Player();
	/* �v���C���[�̖��O��ݒ肷�� */
	void setName();
	int getHand();
};

