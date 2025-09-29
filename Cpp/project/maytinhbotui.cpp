#include <bits/stdc++.h>
using namespace std;
#define ll long long
// hàm tính giai thừa
ll giai_thua(int a){
    ll dap_an=1;
    for (int i=1;i<=a;i++){
        dap_an*=i;
        } 
    return dap_an;
}

int main(){
    char op;
    float a,b,dap_an;
    cout<<"Nhap phep tinh cua ban: ";
    cin>>op;
    if (op=='^') {
        cout<<"Nhap so can tinh luy thua: ";
        cin>>a;
        cout<<a<<"^"; cin>>b;
    }else if (op=='!'){
        cout<<"Nhap so can tinh giai thua: ";
        cin>>a;
    } else {
        cout<<"Nhap so can tinh: "; cin>>a>>b;
    }

    // xac dinh phep toan
    switch (op)
    {
    case '+':
        dap_an=a+b;
        cout<<"Ket qua: "<<dap_an;
        break;
    case '-':
        dap_an=a-b;
        cout<<"Ket qua: "<<dap_an;
        break;
    case '*':
        dap_an=a*b;
        cout<<"Ket qua: "<<dap_an;
        break;
    case '/':
        dap_an=a/b;
        cout<<"Ket qua: "<<dap_an;
        break;
    case '^':
        dap_an=pow(a,b);
        cout<<"Ket qua: "<<dap_an;
        break;
    case '!':
        giai_thua(a);
        cout<<"Ket qua: "<<giai_thua(a);
        break;
    default:cout<<"Phep toan khong hop le,";
        break;
    }
    return 0;
}