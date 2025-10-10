#include <iostream>
#include <windows.h>
#include "include.h"
using namespace std;
int main()
{   bool exit=false;
    bool gameover = false;
    srand(time(NULL));
    NPC npc = NPC();
    Player player = Player();
    GamePlay game = GamePlay();
    Draw draw = Draw();
    draw.Guide();
    while (!exit)
    {   
        game.score=0;
        game.scoreNPC=0;
        int dem=1;
        draw.Menu();
        int lc;
        cin >> lc;
        if (lc == 1 && (gameover=false,true))
        {   
            while (!gameover)
            {   cout<<"Lan "<<dem++<<"-";
                draw.Easy();
                player.Nhap();
                npc.Random();
                player.In();cout << " VS ";npc.Draw();cout << endl;
                game.check(player.getX(), npc.getI());
                cout << "Diem hien tai: " << game.getS() << "/" << game.getSNPC() << endl;
                game.checkScore(1,game.getS(),game.getSNPC(),gameover);
                Sleep(1000);
            }
        }
        else if (lc == 2 && (gameover=false,true))
        {
            while (!gameover)
            {   cout<<"Lan "<<dem++<<"-";
                draw.Normal();
                player.Nhap();
                npc.Random();
                player.In();cout << " VS ";npc.Draw();cout << endl;
                game.check(player.getX(), npc.getI());
                cout << "Diem hien tai: " << game.getS() << "/" << game.getSNPC() << endl;
                game.checkScore(2,game.getS(),game.getSNPC(),gameover);
                Sleep(1000);
            }
        }
        else if (lc == 3 && (gameover=false,true))
        {
            while (!gameover)
            {   cout<<"Lan "<<dem++<<"-";
                draw.Hard();
                player.Nhap();
                npc.Random();
                player.In();cout << " VS ";npc.Draw();cout << endl;
                game.check(player.getX(), npc.getI());
                cout << "Diem hien tai: " << game.getS() << "/" << game.getSNPC() << endl;
                game.checkScore(3,game.getS(),game.getSNPC(),gameover);
                Sleep(1000);
            }
        }
        else if(lc==4)
        {
            exit=true;
        }
        Sleep(1000);
    }
    return 0;
}
