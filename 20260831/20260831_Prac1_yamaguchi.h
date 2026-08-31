#pragma once
#include<string>
using namespace std;

class BankAccount
{
private:
	std::string accountHolder; // 口座名義人
	double balance;            // 残高

public:

	BankAccount(const string& holder, double initialBalance);

	//Get関数（残高）
	double getBalance() const;
	//deposit預入　amount量
	//預入関数
	void deposit(double amount);
	//引き出し関数
	void withdraw(double amount);
	//アカウント表示関数
	void displayAccountInfo() const;
};