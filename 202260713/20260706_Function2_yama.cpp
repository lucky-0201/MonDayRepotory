#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_Header2_yama.h"
using namespace std;

//入力関数
int InputCheck(int max,int min)
{
	int num;

	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください。\n" ;
		}
		else
		{
			break;
		}
	}

	return num;
}

//判定関数
int Judgement(int player,int cpu)
{
	int judg;
	judg = player - cpu;
	return judg;
}

//レベル関数
void LevelUp(int &exp,int &lv)
{
	int expAcquisition = rand()% EXPERIENCE_POINT_MAX + EXPERIENCE_POINT_MIN;
	exp += expAcquisition;

	//レベルアップ
	if (exp >= THERSHOLD)
	{
		lv++;
		cout << "レベルが上がりました。\n";

		cout << "Lv:" << lv << "です。" << endl;

		exp -= 20;
	}
	else
	{
		cout << expAcquisition << "獲得しました" << endl;
	}

}

//じゃんけんの手を出す関数
void ShowHand(int &hand)
{
	switch (hand)
	{
	case ROCK:
		cout << "グー" << endl;
		break;
	case SCISSORS:
		cout << "チョキ" << endl;
		break;
	case PAPER:
		cout << "パー" << endl;
		break;
	default:
		break;
	}
}

//ゲーム関数
void Game(int &exp,int &level)
{
	//変数
	int player = 0;
	int enemy = 0;

	int judg = 0;
	cout << "じゃんけんゲームをしましょう" << endl;
 	cout << "選択する手は、「グー：0」「チョキ:1」「ぱー:2」とします" << endl;
 	cout << "勝つと経験値が獲得でき、閾値を超えるとレベルが上がっていきます。" << endl;

	cout << "===================== PlayerTurn ============================" << endl;

	//入力
	player = InputCheck(INPUT_MAX,INPUT_MIN);
	enemy = rand() % HAND_NUMBAER;

	cout << "PlayerHand\n";
	ShowHand(player);
	cout << "CPUHand\n";
	ShowHand(enemy);

	//判定
	judg = Judgement(player,enemy);

	if (judg == -1||judg == 2)
	{
		cout << "PlayerWin\n";
		LevelUp(exp,level);

	}
	else if (judg == 0)
	{
		cout << "Draw" << endl;
	}
	else
	{
		cout << "cpu Win" << endl;
	}
 }