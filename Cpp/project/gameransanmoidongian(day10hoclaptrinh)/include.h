#pragma once
#include <bits/stdc++.h>
#include <conio.h>
#include "thuvien.h"
using namespace std;
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
    int x=10, y=29;
    while (x<=100){
    gotoXY(x,y);
    cout<<"+";
    x++;
    }
}

void khung_trai(){
    int x=10, y=1;
    while (y<30){
    gotoXY(x,y);
    cout<<"+";
    y++;
    }
}

void khung_phai(){
    int x=100, y=1;
    while (y<30){
    gotoXY(x,y);
    cout<<"+";
    y++;
    }
}

void khung(){
    khung_tren();
    khung_duoi();
    khung_trai();
    khung_phai();
}

// ham dieu khien vat the