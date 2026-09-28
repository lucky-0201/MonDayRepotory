#pragma once
#include"Player.h"
#include"CPU.h"
#include"CradManager.h"

class Trun
{
public:
	bool PlayPlayerTrun(Player*player,CradManager*cardManager);
	
	void PlayCpuTrun(CPU*cpu,CradManager*cardManager);
};