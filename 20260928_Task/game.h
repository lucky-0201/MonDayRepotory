#pragma once
#include "Player.h"
#include "CPU.h"
#include "CradManager.h"
#include "Trun.h"

class Game
{
private:
	CradManager cardManager;
	Player player;
	CPU cpu;
	Trun turn;
	//カードを配る
	void DealInitialCards();
	//勝敗判定
	void ShowResult();

public:
	//コンストラクタ
	Game();
	//ゲーム開始
	void Start();

};

