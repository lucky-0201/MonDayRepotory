#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_Header2_yama.h"
using namespace std;

int main(void)
{
	//•Ï”
	int exp = 0;
	int level = 1;

	//—”‰Šú‰»
	srand((unsigned int)time(NULL));
	
	//ƒQ[ƒ€ƒ‹[ƒv
	while (true)
	{
		Game(exp,level);
	}
	
	return 0;
}