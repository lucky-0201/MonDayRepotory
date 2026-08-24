#include<iostream>
using namespace std;

//計算関数
void Cal(int *pNum)
{
	//変数
	int num;
	cout << "数字を選択してください。" << endl;
	cout << "数字が倍になります。" << endl;
	//入力
	cin >> num;
	cout << "選択した数字は、 "<< num << endl;
	//計算
	for (int i = 0; i < 5; i++)
	{
		cout << num << "倍されました。" << endl;
		cout << num * *(pNum + i) << endl;
	}
}

//メイン関数
int main(void)
{
	//変数
	int numbers[5] = { 10,20,30,40,50 };
	int* pNum;

	pNum = numbers;

	cout << "初期数字は、" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << i << "]:" << *(pNum + i) << endl;
	}

	cout << "です" << endl;

	//計算関数
	Cal(pNum);

	return 0;
}