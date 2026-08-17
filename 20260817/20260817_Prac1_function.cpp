#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"
//球種関数
void PitingType(int piting)
{
	//入力した数字を文字の変換する
	switch (piting)
	{
	case 0:
		cout << "ストレートを投げました" << endl;
		break;
	case 1:
		cout << "カーブを投げました" << endl;
		break;
	case 2:
		cout << "スライダーを投げました" << endl;
		break;
	case 3:
		cout << "シンカーを投げました" << endl;
		break;

	}
}

//勝敗関数
void Result(int out)
{
	if (out >= 3)//アウトカウント３回以上で勝利
	{
		cout << "PLAYER WINNER!!" << endl;
	}
	else
	{
		cout << "CPU WINNER!!" << endl;
	}
}