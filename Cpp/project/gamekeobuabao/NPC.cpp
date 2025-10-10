#include "include.h"
#include <iostream>
#include <random>
using namespace std;
int NPC::Random()
{
    {
        i = rand() % 3 + 1;
        return i;
    }
}
void NPC::Draw(){
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

int NPC::getI()
{
    return i;
}
