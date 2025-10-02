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
void khungtrai(){
    int x=10,y=0;
    for (int i=0;i<30;i++){
        gotoXY(x,y);
        cout<<"*";
        y++;
    }
}
void khungphai(){
    int x=100,y=0;
    for (int i=0;i<30;i++){
        gotoXY(x,y);
        cout<<"*";
        y++;
    }
}
void khung(){
    khungtrai();
    khungphai();
}
int main(){
    int x=50,y=26;
    int xcu,ycu;
    int check=3;
    khung();
    while (true){
        gotoXY(xcu,ycu);
        cout<<" ";
        gotoXY(x,y);
        cout<<"*";
        xcu=x;ycu=y;
        // di chuyen vat the
        if (kbhit()){
            char kitu=getch();
            if (kitu==-32){
                kitu=getch();
                if (kitu==75){check=2;};
                if (kitu==77){check=3;};
            }
        }
        //kiem tra di chuyen trai phai
        if (check==2){//di sang trai
            x--;
        }else if (check=3){
            x++;
            gotoXY(x,y);
        }

        Sleep(50);
    }
    return 0;
}