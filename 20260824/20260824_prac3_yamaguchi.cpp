#include<iostream>
using namespace std;

int main()
{
	int numbers[5] = {35,82,17,96,54};
	int* pNum;

	pNum = numbers;

	for (int i = 0;i < 5;i++)
	{
		cout << "[ " << i << "] : " << *(pNum + i) << endl;
	}

	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		if (*(pNum + i) >= max)
		{
			max= *(pNum + i);
		}
	}
	cout << "Å‘å’lF" << max;
	return 0;
}