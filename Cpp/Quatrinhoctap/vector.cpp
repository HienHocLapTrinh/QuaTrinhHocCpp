#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
//Vector<kieu du lieu> ten_bien
//size():cho biet kich thuoc
//ten_bien[0]: phan tu dau tien cua vector
//ten_bien[tenbien.size()-1] hoac ten_bien.back(): phan tu cuoi cung cua vector


int main(){
    vector<int> x;
    int n=5;
    while(true){
        for(int z=0;z<5;z++){
            int i = rand()%100+1;
            system("cls");
            x.push_back(i);
            cout<<x[z];
            Sleep(300);
        }
    }
    // //duyet cac phan tu trong vector
    // //cach 1
    // for(int i=0;i<x.size();i++){
    //     cout<<x[i]<<"\t";
    // } cout<<endl;

    // // cach 2
    // for (int y : x){
    //     cout<<y<<"\t";
    // } cout<<endl;


    // //cach 3:  (iterator) hoac dung (auto): dich iterator tung buoc den x.end() se dung (cham hon for)
    // for(vector<int>::iterator /*hoac dung (auto)*/ it = x.begin();it != x.end(); ++it){
    //     cout<<*it<<"\t";
    // }

    system("pause");
    return 0;
}