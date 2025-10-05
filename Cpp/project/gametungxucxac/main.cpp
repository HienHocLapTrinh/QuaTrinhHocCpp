#include <iostream>
#include <windows.h>
#include "include.h"
using namespace std;
int i;
int main(){
    while(true){
    xucxac r;
    r.tungxucxac();
    cout<<r.getX()<<" ";
    xucxac g;
    g.tungxucxac();
    cout<<g.getX()<<" ";
    Sleep(1000);
    }
    return 0;
}