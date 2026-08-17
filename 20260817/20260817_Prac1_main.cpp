#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;    //投げる回数（最小）
const int PITING_MAX = 3;    //投げる回数（最大）
const int PROBABILITY = 4;   //確率
const int STRIKE_COUNT = 3;  //ストライクカウント
const int BALL_COUNT = 4;    //ボールカウント
const int OUT_COUNT = 3;     //アウトカウント
const int HIT_COUNT = 4;     //ヒットカウント

int main(void)
{
    //へんすう
    int ply, emy;   //プレイヤーと敵の変数
    int prod;       //確率の変数
    int Strike = 0; //ストライクカウント初期化
    int Ball = 0;   //ボールカウント初期化
    int Out = 0;    //アウトカウント初期化
    int Hit = 0;    //ヒットカウント初期化
    //乱数初期化
    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    while (Out < OUT_COUNT && Hit < HIT_COUNT)//アウトとヒットカウントが上限以下で処理を終了
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力☑
        while (true)
        {
            cin >> ply;
            //選択した数字が範囲外で処理を実行
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else //選択した数字が範囲内で処理を実行
            {
                break;
            }
        }

        //球種関数を呼び出す
        PitingType(ply);

        //敵の確率を生成
        emy = rand() % PROBABILITY;

        //確率を生成
        prod = rand() % PROBABILITY;

        //以下の条件の場合処理を実行
        if (ply != emy)
        {
            if (prod == 0)//probが0の場合以下の内容を実行
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else//以下の内容を実行
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //条件外の場合処理を実行
        else
        {
            Strike = 0; //ストライクカウント初期化
            Ball = 0;   //ボールカウント初期化
            //以下の条件の場合
            if (prod == 1)//確率が１の場合OUTカウントを+1追加
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else//それ以外は、ヒットカウントを+1追加
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //以下の条件の場合
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクした回数が、ストライクカウントを超えた場合アウトカウントを+1追加
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            else //それ以外は、ヒットカウントを+1追加                
            {                                  
                Hit++;                         
            }                                  
                                               
            Strike = 0;    //ストライクカウントを初期化                    
            Ball = 0;      //ボールカウントを初期化
        }

        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //勝敗関数を呼び出す
    Result(Out);

    return 0;
}