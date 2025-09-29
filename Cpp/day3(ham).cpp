// #include <bits/stdc++.h>
// #include "day3(vonglap).h"
// using namespace std;
// //=>> khi gọi hàm thì đối số sẽ truyền vào tham số
// int tinh_tong(int a,int b,int c){ //int a,int b,int c =>> gọi la tham số
//     int sum= a+b+c;
//     return sum;
// }
// int main(){
//     int a;
//     int b;
//     int c;
//     cout<<"nhap vao 3 so: ";
//     cin>> a >> b >>c;
//     cout<<tinh_tong(a,b,c);// a,b,c gọi là đối số
//     return 0;
// }


// #define ll long long 
// #include <bits/stdc++.h>
// using namespace std;
// void disPlayNumber(ll a,ll b,ll c){
//     cout<< b << c << a <<"\n";
//     ll sum = a+b+c;
//     cout<< sum << endl;
//     cout<<"Ket Thuc";
// }
// int main(){
//     ll a;
//     ll b;
//     ll c;
//     cin >> a >> b >> c;
//     disPlayNumber(a,b,c);
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// /*1. Viết chương trình C++ để nhập một số nguyên và tìm lập phương của số đó.*/

// int lap_phuong(ll a){
//     ll lapphuong=a*a*a;
//     return lapphuong;
// }
// int main(){
//     ll a;
//     cout<<"nhap so can lap phuong: ";
//     cin>>a;
//     cout<<lap_phuong(a);
//     return 0;
// }

/*2. Viết chương trình C++ để in ra màn hình số kế tiếp của số nguyên bạn vừa nhập.*/

int so_ke_tiep(ll a){
    ll b=a+1;
    return b;
}
int main(){
    ll a;
    cout<<"nhap so can tim so ke tiep: ";
    cin>>a;
    cout<< so_ke_tiep(a);
    return 0;
}