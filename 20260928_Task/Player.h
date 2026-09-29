#pragma once
class Player
{
private:
	int total;

public:
	Player();

	//カードを追加
	void PlayerAddCard(int card);
	//合計点を取得する
	int GetTotal();
	//現在の状態を表示
	void ShowStatus();

};

