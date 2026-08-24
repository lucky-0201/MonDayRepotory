#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;//初期の値を0にする
    int* p = &a;//[p]に[a]のアドレスを取得

    cout << "aの初期値: " << a << endl;//変数aを表示

    *p = 10;//ポインタ変数[p]から[a]にアドレスを変更

    cout << "aの変更後の値: " << a << endl;//変数aを表示

    return 0;
}