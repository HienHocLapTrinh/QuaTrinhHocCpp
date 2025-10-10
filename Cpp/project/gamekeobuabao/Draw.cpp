#include "include.h"
#include <iostream>
using namespace std;
void Draw::Guide()
{
    cout << "============================Guide========================\n";
    cout << "==EASY MODE==:Neu ban thang 3 van,ban se chien thang!!!\n";
    cout << endl;
    cout << "==NORMAL MODE==:Neu ban thang 5 van,ban se chien thang!!!\n";
    cout << endl;
    cout << "==HARD MODE==:Neu ban thang 7 van,ban se chien thang!!!\n";
    cin.ignore();
}

void Draw::Menu()
{
    cout << "==========MENU===========\n";
    cout << "=>Chon do kho.\n";
    cout << "1.Muc do de.\n";
    cout << "2.Muc do trung binh.\n";
    cout << "3.Muc do kho.\n";
    cout << "4.EXIT!\n";
    cout << "Moi ban chon: ";
}
void Draw::Easy()
{
    cout << "=============EASY MODE============\n";
    cout << "keo===Bua===Bao\n";
    cout << "1.Keo\n";
    cout << "2.Bua\n";
    cout << "3.Bao\n";
    cout << "==>Nhap Lua Chon: ";
}
void Draw::Normal()
{
    cout << "=============NORMAL MODE============\n";
    cout << "1.Keo\n";
    cout << "2.Bua\n";
    cout << "3.Bao\n";
    cout << "==>Nhap Lua Chon: ";
}
void Draw::Hard()
{
    cout << "=============HARD MODE============\n";
    cout << "1.Keo\n";
    cout << "2.Bua\n";
    cout << "3.Bao\n";
    cout << "==>Nhap Lua Chon: ";
}