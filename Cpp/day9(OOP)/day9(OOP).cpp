#include <bits/stdc++.h>
using namespace std; 
// class : lop
// attribute : thuoc tinh
// method, behavior : phuong thuc
// object : doi tuong
// contructor : ham khoi tao
// destructor : ham huy
// this pointer : con tro this (this->)
// setter  getter
/*VD:
class con nguoi
thuoc tinh : ten, tuoi, dia chi,...
phuong thuc : an uong, di lai,...
object : chi cu the 1 doi tuong nao do.*/

// -encapsulation : dong goi
/* -access modifier (pham vi cua thuoc tinh):
        -private
        -public
        -protected

*/
// Phuong thuc dong goi
class SinhVien{
    // Thuoc tinh va phuong thuc 
    private:
        string id,ten,tuoi,ns;
        double gpa;
    public:
        SinhVien();//contructor (ham nay khong co kieu tra ve)//co ten trung voi ten class
        SinhVien(string,string,string,double);
        void ThongTinSinhVien();//co the khai ham ben trong lan ben ngoai
        void inThongTinSinhVien();
        double getGpa();
        ~SinhVien();//ham huy
};

// Implementation`
SinhVien::SinhVien(){
    // cout<<"doi tuong mac dinh duoc tao o day\n";
    this->id = this->ten =this->ns ="";// string thi gang bang tap rong
    this->gpa=0;// so thi gang bang 0
}
SinhVien::SinhVien(string id,string ten,string ns, double gpa){//luon co san khong can xay dung hoac co the tu xay dung hco minh
    cout<<"Ham khoi tao co tham so duoc goi\n";
    this->id = id;
    this->ten = ten;
    this->ns = ns;
    this->gpa = gpa;
}

SinhVien::~SinhVien(){
    // cout<<"doi tuong duoc huy tai day\n";
}
void SinhVien::ThongTinSinhVien(){
    cout<<"Nhap id: ";cin>>id;
    cin.ignore();
    cout<<"nhap ten: ";getline(cin,ten);
    cout<<"nhap ns: ";cin>> ns;
    cout<<"nhap diem: ";cin>>gpa;
}
void SinhVien::inThongTinSinhVien(){
    cout<<this->id<<" "<<this->ten<<" "<<this->ns<<" "<<fixed<<setprecision(2)<<this->gpa<<endl;
}
double SinhVien::getGpa(){
    return this->gpa;//return gpa
}
bool cmp(SinhVien a,SinhVien b){
    return a.getGpa() > b.getGpa();
}
int main(){
    int n; cin>>n;
    SinhVien a[100];
    for (int i=0;i<n;i++){
        a[i].ThongTinSinhVien();
    }
    sort(a,a + n,cmp);
    for (int i=0;i<n;i++){
        a[i].inThongTinSinhVien();
    }
    return 0;
}