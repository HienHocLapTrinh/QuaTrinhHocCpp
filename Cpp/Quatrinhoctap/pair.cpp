#include <bits/stdc++.h>
using namespace std;
//pair <data_typer1,data_type2> v;
//v.first;
//v.second;
int main(){
    pair<int,int> setting={100,100};
    cout<<"Setting"<<endl;
    cout<<"1.Lua chon 1."<<endl;
    cout<<"2.Lua chon 2."<<endl;
    int n; cin>>n;
    if (n=1){
        cout<<setting.first;
    }
    else if (n=2){
        cout<<setting.second;
    }
    system("pause");
    return 0;
}