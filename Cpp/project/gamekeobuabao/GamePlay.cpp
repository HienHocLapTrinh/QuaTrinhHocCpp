#include <iostream>
#include "include.h"
using namespace std;
    void GamePlay::check(int player, int npc)
    {
        if ((player == npc))
        {
            cout << "==>Hoa Nhau" << endl;
        }
        else if ((player == 1) && (npc == 2) || (player == 2) && (npc == 3) || ((player == 3) && (npc == 1)))
        {
            cout << "==>Ban Thua" << endl;
            scoreNPC++;
        }
        else if ((player == 1) && (npc == 3) || (player == 2) && (npc == 1) || ((player == 3) && (npc == 2)))
        {
            cout << "==>Ban Thang!" << endl;
            score++;
        }
        else
        {
            cout << "Khong hop le!!!!!" << endl;
        }
    }
    int GamePlay::getS()
    {
        return score;
    }
    int GamePlay::getSNPC()
    {
        return scoreNPC;
    }
    void GamePlay::checkScore(int gamemode, int getS, int getSNPC, bool &gameover)
    {
        if (gamemode == 1)
        {
            if (getS == 3)
            {
                cout << "Ban da chien thang 'EASY MODE'\n";
                gameover = true;
            }
            else if (getSNPC == 3)
            {
                cout << "Ban da thua 'EASY MODE'\n";
                gameover = true;
            }
        }
        else if (gamemode == 2)
        {
            if (getS == 5)
            {
                cout << "Ban da chien thang 'NORMAL MODE'\n";
                gameover = true;
            }
            else if (getSNPC == 5)
            {
                cout << "Ban da thua 'NORMAL MODE'\n";
                gameover = true;
            }
        }
        else if (gamemode == 3)
        {
            if (getS == 7)
            {
                cout << "Ban da chien thang 'HARD MODE'\n";
                gameover = true;
            }
            else if (getSNPC == 7)
            {
                cout << "Ban da thua 'HARD MODE'\n";
                gameover = true;
            }
        }
    }