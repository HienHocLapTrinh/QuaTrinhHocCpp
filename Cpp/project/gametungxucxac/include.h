#pragma once
#include <random>
#include "windows.h"
class xucxac{
    public:
    int x,i;
    int a[6]={1,2,3,4,5,6};
    xucxac();
    void tungxucxac();
    int getX();
};
xucxac::xucxac(){
    this->a[i];
}
void xucxac::tungxucxac(){
    srand(time(NULL));
    i=rand()%(5-0+1)+0;
}
int xucxac::getX(){
    return a[i];
}