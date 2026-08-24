#include<iostream>
using namespace std;

int main()
{
	//”z—ñ
	int ary[5] = {0,20,33,55,48};
	int* pAry;

	//pAry‚ª”z—ñ‚Ìæ“ª‚ğ‚³‚·
	pAry = ary;
	for (int i = 0;i< 5;i++)
	{
		cout << "&ary[" << i << "]:" << &ary[i] << endl;
		cout << pAry + 1 << endl;
	}

	for (int i = 0;i < 5;i++)
	{
		cin >> *(pAry + i);
	}

	for (int i = 0;i < 5;i++)
	{
		cout << "pAyr : " << *(pAry + i) << endl;
	}

	return 0;
}