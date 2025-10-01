#pragma once
#include <bits/stdc++.h>
#include <conio.h>
#include "thuvien.h"
using namespace std;

extern int sl; // Declare sl as external if defined elsewhere

// ve khung
void khung_tren(){
    int x=10, y=1;
    while (x<=100){
    gotoXY(x,y);
    cout<<"+";
    x++;
    }
}
void khung_duoi(){
    int x=10, y=26;
    while (x<=100){
    gotoXY(x,y);
    cout<<"+";
    x++;
    }
}

void khung_trai(){
    int x=10, y=1;
    while (y<=26){
    gotoXY(x,y);
    cout<<"+";
    y++;
    }
}

void khung_phai(){
    int x=100, y=1;
    while (y<=26){
    gotoXY(x,y);
    cout<<"+";
    y++;
    }
}

void khung(){
    SetColor(11);
    khung_tren();
    khung_duoi();
    khung_trai();
    khung_phai();
    SetColor(7);
}

// ham khoi tao ran