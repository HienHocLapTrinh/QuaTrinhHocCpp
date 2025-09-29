#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string id ,name ,age;
    public:
        SinhVien();
        SinhVien(string,string,string);
        void nhapThongTinSinhVien();
        void inThongTinSinhVien();
    };
// Implementation(phuong thuc)
SinhVien::SinhVien(){
        this->id = this->name = this->age = "";
    }

SinhVien::SinhVien(string id,string name,string age){
    this->id = id;
    this->name = name;
    this->age = age;
}

void SinhVien::nhapThongTinSinhVien(){
    cout<<"Nhap id: ";getline(cin,id);
    cout<<"Nhap name: ";cin>>name;
    cout<<"Nhap age: ";cin>>age;
    cin.ignore();
}

void SinhVien::inThongTinSinhVien(){
    cout<<this->id<<" "<<this->name<<" "<<this->age<<endl;
}
int main(){
    SinhVien x;
    x.nhapThongTinSinhVien();
    x.inThongTinSinhVien();
    return 0;
}