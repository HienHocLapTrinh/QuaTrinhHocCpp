#include <iostream>
#include <windows.h>
using namespace std;
//NPC
class NPC
{
public:
    int i;
    int Random()
    {
        i = rand() % 3 + 1;
        return i;
    }

    void Draw()
    {
        switch (i)
        {
        case 1:
            cout << "Keo";
            break;
        case 2:
            cout << "Bua";
            break;
        case 3:
            cout << "Bao";
            break;
        }
    }
    int getI()
    {
        return i;
    }
};
//Nguoi choi
class Player
{
public:
    int x;
    int Nhap()
    {
        cin >> x;
        return x;
    }
    void In()
    {
        if (x == 1)
        {
            cout << "Keo";
        }
        else if (x == 2)
        {
            cout << "Bua";
        }
        else if (x == 3)
        {
            cout << "Bao";
        }
    }
    int getX()
    {
        return x;
    }
};
//ve man choi
class Draw
{
    public:
    void Guide(){
        cout<<"============================Guide========================\n";
        cout<<"==EASY MODE==:Neu ban thang 3 van,ban se chien thang!!!\n";
        cout<<endl;
        cout<<"==NORMAL MODE==:Neu ban thang 5 van,ban se chien thang!!!\n";
        cout<<endl;
        cout<<"==HARD MODE==:Neu ban thang 7 van,ban se chien thang!!!\n";
        cin.ignore();
    }
    void Menu()
    {   
        cout << "==========MENU===========\n";
        cout << "=>Chon do kho.\n";
        cout << "1.Muc do de.\n";
        cout << "2.Muc do trung binh.\n";
        cout << "3.Muc do kho.\n";
        cout << "Moi ban chon: ";
    }
    void Easy()
    {   
        cout << "=============EASY MODE============\n";
        cout << "keo===Bua===Bao\n";
        cout << "1.Keo\n";
        cout << "2.Bua\n";
        cout << "3.Bao\n";
        cout << "==>Nhap Lua Chon: ";
    }
    void Normal()
    {   cout << "=============NORMAL MODE============\n";
        cout << "1.Keo\n";
        cout << "2.Bua\n";
        cout << "3.Bao\n";
        cout << "==>Nhap Lua Chon: ";
    }
    void Hard()
    {   cout << "=============HARD MODE============\n";
        cout << "1.Keo\n";
        cout << "2.Bua\n";
        cout << "3.Bao\n";
        cout << "==>Nhap Lua Chon: ";
    }
};
// game play
class GamePlay
{
    public:
    int score = 0;
    int scoreNPC = 0;
    void check(int player, int npc)
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
    int getS()
    {
        return score;
    }
    int getSNPC()
    {
        return scoreNPC;
    }
    void checkScore(int gamemode, int getS, int getSNPC, bool &gameover)
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
};

int main()
{   
    bool gameover = false;
    srand(time(NULL));
    NPC npc = NPC();
    Player player = Player();
    GamePlay game = GamePlay();
    Draw draw = Draw();
    draw.Guide();
    while (true)
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
        Sleep(1000);
    }
    return 0;
}