#include <bits/stdc++.h>
#include <string>
using namespace std;
int dem=0;
class SinhVien{
    private:
        string id ,name ,age;
        float diem;
    public:
        SinhVien();//constructor
        SinhVien(string,string,string);//constructor
        void nhapThongTinSinhVien();
        void inThongTinSinhVien();
        friend void chuanHoa(SinhVien&);
    };
// Implementation(phuong thuc)
void chuanHoa(SinhVien&a){
    string res = "";
    stringstream ss(a.name);
    string token;
    while (ss >> token){
        res+=toupper(token[0]);
        for (int i=1;i<token.length();i++){
            res+=tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length()-1);
    a.name = res;
}

SinhVien::SinhVien(){
        this->id = this->name = this->age = "";
        this->diem;
    }

SinhVien::SinhVien(string id,string name,string age){
    this->id = id;
    this->name = name;
    this->age = age;
    this->diem;
}

void SinhVien::nhapThongTinSinhVien(){
    ++dem;
    this-> id= "SV" + string(3 - to_string(dem).length(),'0') +to_string(dem);
    cout<<"Nhap name: ";getline(cin,this->name);
    cout<<"Nhap age: ";cin>>this->age;
    cout<<"Nhap diem: ";cin>>this->diem;
    cin.ignore();
}

void SinhVien::inThongTinSinhVien(){
    cout<<this->id<<" "<<this->name<<" "<<this->age<<" "<<fixed<<setprecision(2)<<this->diem<<endl;
}
int main(){
    SinhVien x;
    x.nhapThongTinSinhVien();
    chuanHoa(x);
    x.inThongTinSinhVien();
    system("pause");
    return 0;
} 