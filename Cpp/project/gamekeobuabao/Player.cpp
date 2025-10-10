#include "include.h"
#include <iostream>
using namespace std;
int Player::Nhap()
{
    {
        cin >> x;
        return x;
    }
}

void Player::In()
{
    if (x == 1)
    {
        cout << "Keo";
    }
    else if (x == 2)
    {
        cout << "Bua";
    }
    else if (x == 3)
    {
        cout << "Bao";
    }
}

int Player::getX()
{
    return x;
}
