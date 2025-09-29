#include <bits/stdc++.h>
using namespace std;
/*  1
Viết chương trình in các số từ 1 đến 1000 theo thứ tự tăng dần.
*/
// int main(){
//     for (int i=1; i <= 100000000;i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }

/*  2
Viết chương trình in các số từ 1 đến 1000 theo thứ tự giảm dần.
*/
// int main(){
//     int i=1000;
//     while (i!=0){
//         int a=i--;
//         cout<< a << endl;
//     }
// }

/*  3
Viết chương trình in bảng số từ 1 đến 200.*/
// int main (){
//     for (int i=1; i<=200;i++){
//         cout<< i<< "\t";
//     if ( i % 10 ==0){
//         cout << endl;
//     }
//     }
//     return 0;
// }

/*  4
Viết chương trình nhập một số nguyên, tìm bội số của số đó với các số từ 1 đến 20, sau đó in kết quả ra màn hình.
*/
// int main(){
//     int a;
//     cin>>a;
//     for (int i=1;i<=20;i++){
//         int b=a*i;
//         cout<< b<<"\t";
//     }
//     return 0;
// }

/*  5
Viết chương trình in bảng cửu chương rút gọn của các số từ 1 đến n.*/
// int main(){
//     for (int i=1;i<=100;i++){
//         for (int a=1;a<=10;a++){
//             int b=a*i;
//             cout<<b<<" ";
//         } cout<< endl;
//     }
//     return 0;
// }
/*  6
Nhập số nguyên n bất kỳ. Viết chương trình in các số chẵn từ 1 đến n*/
// int main(){
//     int n;
//     cin>> n;
//     for (int i=1;i<=n;i++){
//         if (i%2==0){
//             cout << i<<" ";
//         }
//     }
//     return 0;
// }
/*  6
ve hinh chu nhat
*****
*****
*****
*****
*****
*/
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for (int a=1;a<=n;a++){
//             cout<<"*";
//         }cout<<endl;
//     }
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=n;a++){
            if(i==1||i==n||a==1||a==n){
                cout<<"*";
            }else cout<<" ";
        } cout<<endl;
    } 
    return 0;
}