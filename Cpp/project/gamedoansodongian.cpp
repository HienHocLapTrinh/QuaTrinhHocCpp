#include <iostream>
#include <random>
using namespace std;
int main(){
    // Tạo bộ sinh ngẫu nhiên
    random_device rd;
    mt19937 gen(rd()); // Mersenne Twister 19937
    uniform_int_distribution<> dist(1,100); // khoảng 1 → 100

    // Sinh số ngẫu nhiên
    int sobimat=dist(gen);
    int a;
    int b=0;
    do{
        b++;
        cout<<b<<".moi ban nhap so: ";
        cin>>a;
        if (a>sobimat){
            cout<<"sai roi,con so bi mat nho hon!\n";
        }else if(a<sobimat){
            cout<<"sai roi,con so bi mat lon hon!\n";
        }else{
            cout<<sobimat<<" là đúng rồi.Chuc mung ban!"<<endl;
        }
    } while (a!=sobimat);
    system("pause");
    return 0;
}