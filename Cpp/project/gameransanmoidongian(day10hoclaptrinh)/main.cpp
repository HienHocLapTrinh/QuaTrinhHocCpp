#include "thuvien.h"
#include "include.h"
#include <iostream>
using namespace std;
int main(){
    int i=1;
    int x=20,y=20;
    int check =0;
    // 0 cham vao bien tren - di xuong
    // 1 cham vao bien duoi - di len
    // 2 cham vao bien trai - di phai
    // 3 cham vao bien phai - di trai
    int xcu=x,ycu=y;
    khung();
    while (true){
        // system("cls");//lam nhay cac vat the tinh
        gotoXY(xcu,ycu);
        cout<<" ";//xoa di
        gotoXY(x,y);
        cout<<"*";
        xcu=x; ycu=y; 
        // doi mau chu
        SetColor(i);
        i++;
        if (i>15) i=1;
        // dieu khien vat the
        if (kbhit()){
            char kitu = getch();
            if (kitu == -32){ // phim mui ten
                kitu = getch();
                if (kitu== 72){ // len
                    check =1;
                }else if (kitu==80){ // xuong
                    check =0;
                }else if (kitu==75){ // trai
                    check =2;
                }else if (kitu==77){ // phai
                    check =3;
                }
            }
        }
        // kiem tra huong
        // len / xuong
        if (check ==0 ){
            y++;
        }else if (check ==1){
            y--;
        }
        // phai / trai
        if (check == 2){
            x--;
        }else if (check == 3){
            x++;
        Sleep(100);
        // kiem tra bien
        // bien tren va bien duoi
         }
        if (y==29) {
            check =1;
        }else if ( y==0){
            check =0;
        }
        // bien phai va bien trai
        if (x==119) {
            check =2;
        }else if ( x==0){
            check =3;
        }
        Sleep(100);
    }
    getchar();
    return 0;
}