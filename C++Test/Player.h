#pragma once
#include <string>
using namespace std;

class Player
{
private:
	/* ���O */
	string name;
	/* �� �O�[�Ȃ�1�C�`���L�Ȃ�2�C�p�[�Ȃ�3 */
	int hand;
public:
	Player();
	~Player();
	/* �v���C���[�̖��O��ݒ肷�� */
	void setName();
	void setHand();
	int getHand();
	string getName();
};

