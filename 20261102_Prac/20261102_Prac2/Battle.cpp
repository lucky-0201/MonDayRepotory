#include "Battle.h"
#include"Config.h"
#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"

using namespace std;

Player player;
Enemy enemy;

void Game::Battle::Start()
{
    int comand;

    cout << "==============ゲームスタート==============" << endl;

    while (player.GetHp() > Config::MIN_HP &&
        enemy.GetHp() > Config::MIN_HP)
    {
        cout << "Player HP:" << player.GetHp() << endl;
        cout << "Enemy HP:" << enemy.GetHp() << endl;

        cout << "次の中から行動を選んでください" << endl;
        cout << "1,攻撃  2,防御  3,回復" << endl;

        cin >> comand;

        switch (comand)
        {
        case 1:
            player.Attack(enemy, Config::ATTACK_VALUE);
            break;

        case 2:
            player.Defense();
            break;

        case 3:
            player.Heal();
            break;

        default:
            cout << "正しい行動をしてください" << endl;
            continue;
        }

        // 敵が倒れたか確認
        if (enemy.GetHp() <= Config::MIN_HP)
        {
            break;
        }

        // 敵の行動
        if (comand == 1)
        {
            enemy.Defens(Config::ENEMY_ATTACK);
        }
        else if (comand == 2)
        {
            enemy.Attack(player, Config::DEFENSE_VALUE);
        }
        else if (comand == 3)
        {
            enemy.Attack(player, Config::ATTACK_VALUE);
        }

        // プレイヤーが倒れたか確認
        if (player.GetHp() <= Config::MIN_HP)
        {
            break;
        }
    }

    // 最後に勝敗判定
    cout << "\n========== 戦闘終了 ==========" << endl;

    if (player.GetHp() <= Config::MIN_HP)
    {
        cout << "プレイヤーの敗北！" << endl;
    }
    else if (enemy.GetHp() <= Config::MIN_HP)
    {
        cout << "プレイヤーの勝利！" << endl;
    }
}