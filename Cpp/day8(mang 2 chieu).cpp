#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"nhap n va m: ";
    cin>>n>>m;
    int a[n][m];
    // hang 
    for (int i=0;i<n;i++){
        // cot
        for (int j=0;j<m;j++){
            // nhap tung phan tu trong ma tran
            cin>>a[i][j];
        }
    }
    // hang
    for (int i=0;i<n;i++){
        // cot
        for (int j=0;j<m;j++){
            // duyet va in tung phan tu trong ma tran
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}