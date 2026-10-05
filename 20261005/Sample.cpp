#include<iostream>
#include<string>
using namespace std;

//基底クラス(動物)
class Animal
{
private:
	//string name;

protected:
	string eyes;
	string foot;

public:
	void bark()
	{
		cout << "動物は泣きます\n";
	}

};


//派生クラス（犬）
class Dog:public Animal
{
private:
	string dogName;

public:
	Dog(string Name,string Eyes,string Foot)
	{
		dogName = Name;
		eyes = Eyes;
		foot = Foot;
	}

	void bark()
	{
		cout << "わんわん\n";
	}

	void Show()
	{
		cout << "名前" << dogName << endl;
		cout <<"目の色"<< dogName << endl;
		cout << "足の色" << foot << endl;
	}

};

//メイン関数
int main(void)
{
	string name;
	string eyesColor;
	string footColor;

	cout << "犬の名前を入力してください\n";
	cin >> name;
	cout << "犬の目の色を入力してください\n";
	cin >> eyesColor;
	cout << "犬の足の色を入力してください\n";
	cin >> footColor;
	Dog mydog(name,eyesColor,footColor);
	mydog.Show();
	mydog.Animal::bark();
	mydog.bark();

	return 0;
}