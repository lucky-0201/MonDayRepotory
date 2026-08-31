#include <iostream>
#include <string>
#include"20260831_Prac1_yamaguchi.h"
using namespace std;
    
std::string accountHolder; // 口座名義人
double balance;            // 残高


BankAccount::BankAccount(const string& holder, double initialBalance)
 : accountHolder(holder), balance(initialBalance){
}

//Get関数（残高）
double BankAccount::getBalance() const
{
    return balance;
}

    //deposit預入　amount量
//預入関数
    void BankAccount::deposit(double amount) {
        //以下の条件で処理を実行
        if (amount > 0) 
        {
            //残高を増やす
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
        else//それ以外は、以下の内容を実行 
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    //引き関数
    void BankAccount::withdraw(double amount) {
        //以下の条件で処理を実行
        if (amount > 0 && amount <= balance)
        {
            //残高を減らす
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
        else//それ以外は、以下を実行
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

//アカウント表示関数
void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
    << "Current Balance: " << balance << "\n";
}


int main(void) 
{
    BankAccount account("Alice", 5000.0);

    account.displayAccountInfo();

    account.deposit(1000.0);//1000円預ける
    account.withdraw(2000.0);//2000円引き出す
    account.withdraw(5000.0); // 残高不足で失敗

    account.displayAccountInfo();

    return 0;
}