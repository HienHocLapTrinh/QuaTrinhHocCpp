#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoXY(int x,int y){
    HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { (short)x,(short) y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
class Sao {
    public:
    int x, y;
    int HIGHT = 28;
    Sao(int y0 = 0) {
        x = rand() % (99 - 11 + 1) + 11; // random x trong [11..99]
        y = y0;
    }
    bool roi() {
        gotoXY(x,y);
        cout << " ";   // xoa vi tri cu
        y++;
        if (y > HIGHT) return false; // roi qua day se bi xoa
        gotoXY(x,y);
        cout << "*";   // ve o vi tri moi
        return true;
    }
};

void khungtrai(){
    int x=10,y=0;
    for (int i=0;i<=28;i++){
        gotoXY(x,y);
        cout<<"*";
        y++;
    }
}
void khungphai(){
    int x=100,y=0;
    for (int i=0;i<=28;i++){
        gotoXY(x,y);
        cout<<"*";
        y++;
    }
}
void khung(){
    khungtrai();
    khungphai();
}

class player{
    public:
    int toadox,toadoy;
    player(int x,int y){toadox=x;toadoy=y;};
    void taonhanvat();
    void xoanhanvat();
    void ditrai();
    void diphai();
    int getX() const { return toadox; }
    int getY() const { return toadoy; }
};
void player::taonhanvat(){
    gotoXY(toadox,toadoy);
    cout<<"@";
}
void player::xoanhanvat(){
    gotoXY(toadox,toadoy);
    cout<<" ";
}
void player::ditrai(){
    if(toadox>11){
        xoanhanvat();
        toadox--;
        taonhanvat();
    }
}
void player::diphai(){
    if(toadox<99){
        xoanhanvat();
        toadox++;
        taonhanvat();
    }
}

int main(){
    srand(time(NULL));
    bool gameover=false;
    int x=50,y=26;
    int xcu,ycu;
    int xsao,ysao;
    khung();
    vector<Sao> ds;  // danh sach cac ngoi sao
    player nhanvat(50,25);
    while (!gameover) {
        // 1. tao ngoi sao moi o moi vong lap
        ds.push_back(Sao(0));

        // 2. cap nhat va ve tat ca ngoi sao
        for (int i = 0; i < ds.size(); ) {
            if (!ds[i].roi()) {
                // sao rơi quá đáy → xoá khỏi danh sách
                ds.erase(ds.begin() + i);
            } else {
                i++;
            }
        }
        // di chuyen nhan vat
        if (kbhit()){
            char kitu=getch();
            if (kitu==-32){
                kitu=getch();
                if (kitu==75){nhanvat.ditrai();};
                if (kitu==77){nhanvat.diphai();};
            }
        }
        // kiem tra va cham
        for (auto &s : ds) {
        if (s.x == nhanvat.getX() && s.y == nhanvat.getY()) {
            gameover = true;
        }
        }
        Sleep(50);
    }
    system("cls");
    cout<<"GAME OVER ";
    system("pause");
    return 0;
}
