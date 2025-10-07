#include <iostream>
#include <windows.h>
using namespace std;
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
    bool checkScore()
    {
        if (score <= 3)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{   int dem=1;
    bool gameover = false;
    srand(time(NULL));
    NPC npc = NPC();
    Player player = Player();
    GamePlay game = GamePlay();
    while (!gameover)
    {   
        cout<<dem++<< ".Kep===Bua===Bao" << endl;
        cout << "1.Keo" << endl;
        cout << "2.bao" << endl;
        cout << "3.bua" << endl;
        player.Nhap();
        npc.Random();
        player.In();
        cout << " VS ";
        npc.Draw();
        cout << endl;
        game.check(player.getX(), npc.getI());
        cout << "Diem hien tai: " << game.getS() << "-" << game.getSNPC()<<endl;
        if (game.getS()==3){
            cout<<"BAN DA THANG TRO CHOI NAY!!!";
            return gameover=true;
        }else if (game.getSNPC()==3){
            cout<<"BAN DA THUA TRO CHOI NAY!!!";
            return gameover=true;
        }
        Sleep(500);
    }
    system("pause");
    return 0;
}