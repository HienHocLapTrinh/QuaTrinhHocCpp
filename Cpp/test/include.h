#pragma once
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void gotoXY(int x,int y){
    HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { (short)x,(short) y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
class taosao{
    private:
        int x,y;
        int toadox,toadoy;
    public:
        void random();
    };

// implementation
void random(){
    int x,y=0;
    x=rand()%(99-11+1)+11;
    gotoXY(x,y);
    cout<<"*";
}