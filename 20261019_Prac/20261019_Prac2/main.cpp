#include<iostream>
#include"MagicalGirl.h"
#include"Madoka.h"
#include"Homura.h"

using namespace std;

int main()
{
	Madoka madoka;
	Homura homura;

	MagicalGirl* magical[2]{ &madoka,&homura };

	for (int i = 0;i < 2;i++)
	{
		magical[i]->Fight();
		magical[i]->ShowProfile();
		cout << endl;
	}

	return 0;
}