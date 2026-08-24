#include<iostream>
using namespace std;

int main()
{
	int numbers[5] = {10,20,30,40,50};
	int* pary;

	pary = numbers;

	for (int i = 0;i < 5;i++)
	{
		cout << "ary [" << i << "] : " << &pary[i] << endl;
		cout << *(pary + i) << endl;
	}

	
	return 0;
}