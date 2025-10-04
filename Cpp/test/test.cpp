// #include <bits/stdc++.h>
// #include "thuvien.h"
// using namespace std;
// class sao{
//     private:
//     int toadox,toadoy;
//     int xcu=0, ycu=0;
//     int HIGHT=28;
//     public:
//     sao(int y=0){toadox=rand()%(100-11+1)+11;toadoy=y;};
//     void taosao();
//     void saoroi();
//     void update();
// };

// void sao::taosao(){
//     gotoXY(toadox,toadoy);
//     cout<<"*";
// }

// void sao::saoroi(){
//     for(int i=0;i<=HIGHT;i++){
//         xcu=toadox;ycu=toadoy;
//         gotoXY(xcu,ycu);
//         cout<<" ";
//         toadoy++;
//         taosao();
//         Sleep(100);
//     }
// }
// void sao::update(){
//     if (toadoy==28){
//         toadoy=0;
//     }
// }
// void khung(){
//     for(int i=10;i<100;i++){
//         int toadox,toadoy=29;
//         toadox=i;
//         gotoXY(toadox,toadoy);
//         cout<<"*";
//     }
// }
// int x,y;
// int main(){
//     khung();
//     while(true){
//     sao r(0);
//     r.taosao();
//     r.update();
//     r.saoroi();
//     Sleep(50);
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoXY(int x,int y){
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = { (short)x,(short)y };
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

// ---------------- Class Sao (ngôi sao rơi ngẫu nhiên) ----------------
class Sao {
public:
    int x, y;
    int HIGHT = 28;
    Sao(int y0 = 0) {
        x = rand() % (100 - 11 + 1) + 11; // random x trong [11..100]
        y = y0;
    }
    bool roi() {
        gotoXY(x,y);
        cout << " ";   // xoá vị trí cũ
        y++;
        if (y > HIGHT) return false; // rơi quá đáy thì biến mất
        gotoXY(x,y);
        cout << "*";   // vẽ ở vị trí mới
        return true;
    }
};

// ---------------- Class StarPlayer (ngôi sao do người điều khiển) ----------------
class StarPlayer {
public:
    int x, y;
    StarPlayer(int startX, int startY) {
        x = startX;
        y = startY;
    }

    void draw() {
        gotoXY(x,y);
        cout << "@"; // ngôi sao đặc biệt (nhân vật)
    }

    void clear() {
        gotoXY(x,y);
        cout << " ";
    }

    void moveLeft() {
        if (x > 11) { // không vượt qua khung trái
            clear();
            x--;
            draw();
        }
        
    }

    void moveRight() {
        if (x < 100) { // không vượt qua khung phải
            clear();
            x++;
            draw();
           
        }
    }
};

int main() {
    srand(time(NULL));
    vector<Sao> ds;  // danh sách các ngôi sao rơi

    // tạo nhân vật ở giữa màn hình tại y=25
    StarPlayer player(55, 25);
    player.draw();

    while (true) {
        // 1. Tạo ngôi sao mới ở mỗi vòng lặp
        ds.push_back(Sao(0));

        // 2. Cập nhật & vẽ tất cả ngôi sao
        for (int i = 0; i < ds.size(); ) {
            if (!ds[i].roi()) {
                // sao rơi quá đáy → xoá khỏi danh sách
                ds.erase(ds.begin() + i);
            } else {
                i++;
            }
        }

        // 3. Điều khiển ngôi sao đặc biệt bằng mũi tên
        if (kbhit()) {
            char kitu = getch();
            if (kitu == -32) { // phím mũi tên
                kitu = getch();
                if (kitu == 75) { // mũi tên trái
                    player.moveLeft();
                }
                if (kitu == 77) { // mũi tên phải
                    player.moveRight();
                }
            }
        }

        Sleep(100);
    }
    return 0;
}
