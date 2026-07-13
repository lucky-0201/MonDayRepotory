#pragma once

//定数
const int EXPERIENCE_POINT_MIN = 1;
const int EXPERIENCE_POINT_MAX = 15;
const int HAND_NUMBAER = 3;
const int INPUT_MIN = 0;
const int INPUT_MAX = 2;
const int THERSHOLD = 20;

//じゃんけんの列挙型
enum Hand
{
	ROCK,
	SCISSORS,
	PAPER
};

//関数プロトタイプ宣言
int InputCheck(int max,int min);
int Judgement(int player,int cpu);
void LevelUp(int &exp,int &lv);
void Game(int &exp,int &level);
void ShowHand(int &hand);