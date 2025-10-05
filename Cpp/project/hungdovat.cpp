#include "thuvien.h"
#include <iostream>
#include <vector>
using namespace std;
void khungduoi(){
    int x=20,y=29;
    for(int i=20;i<=70;i++){
        gotoXY(x,y);
        cout<<"^";
        x++;
    }
}
void khungtrai()
{
    int x = 20, y = 0;
    for (int i = 0; i <= 28; i++)
    {
        gotoXY(x, y);
        cout << "*";
        y++;
    };
}
void khungphai()
{
    int x = 70, y = 0;
    for (int i = 0; i <= 28; i++)
    {
        gotoXY(x, y);
        cout << "*";
        y++;
    }
}

class Nhanvat
{
public:
    int x = 45, y = 25;
    int xscore = 16, yscore = 0;
    int xcu = 45, ycu = 25;
    int direction = 1;
    void Draw()
    {
        gotoXY(x, y);
        cout << "A";
    }

    void Move()
    {
        if (direction == 0)
        {
            gotoXY(x, y);
            x--;
        }
        else if (direction == 1)
        {
            gotoXY(x, y);
            x++;
        }
    }

    void checkCollistionWithWall()
    {
        if (x == 21)
        {
            direction = 1;
        }
        else if (x == 69)
        {
            direction = 0;
        }
    }
    void Update()
    {
        checkCollistionWithWall();
        Move();
        gotoXY(xcu, ycu);
        cout << " ";
        gotoXY(x, y);
        cout << "A";
        xcu = x;
        ycu = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
void DrawScore(int score)
{
    int xscore = 10, yscore = 0;
    gotoXY(xscore, yscore);
    cout << "Score: "<<score;
}
class Sao
{
public:
    int x, y;
    int HIGHT = 28;
    Sao(int y0 = 0)
    {
        x = rand() % (69 - 21 + 1) + 21;
        y = y0;
    };
    bool roi()
    {
        gotoXY(x, y);
        cout << " "; // xoa vi tri cu
        y++;
        if (y > HIGHT)
            return false; // roi qua day se bi xoa
        gotoXY(x, y);
        cout << "*"; // ve o vi tri moi
        return true;
    }
};
int main()
{
    bool gameover = false;
    srand(time(NULL));
    vector<Sao> ds;
    Nhanvat nhanvat = Nhanvat();
    int score = 0;
    khungtrai();
    khungphai();
    khungduoi();
    DrawScore(score);
    nhanvat.Draw();
    while (gameover==false)
    {
        ds.push_back(Sao(0)); // tao 1 ngoi sao moi o moi vong lap
                              //  2. cap nhat va ve tat ca ngoi sao
        for (int i = 0; i < ds.size();)
        {
            if (!ds[i].roi())
            {
                // sao rơi quá đáy → xoá khỏi danh sách
                ds.erase(ds.begin() + i);
            }
            else
            {
                i++;
            }
        }
        if (kbhit())
        {
            char kitu = getch();
            if (kitu == -32)
            {
                kitu = getch();
                if (kitu == 75)
                {
                    nhanvat.direction = 0;
                }
                else if (kitu == 77)
                {
                    nhanvat.direction = 1;
                }
            }
        }
        // kiem tra va cham
        for (auto &s : ds)
        {
            if (s.x == nhanvat.getX() && s.y == nhanvat.getY())
            {   
                score++;
            };
        }
        // Capnhat diem va nhan vat
        DrawScore(score);
        nhanvat.Update();
        if (score==1){
            return gameover==true;
        };
        Sleep(50);
    }

    system("pause");
    return 0;
}