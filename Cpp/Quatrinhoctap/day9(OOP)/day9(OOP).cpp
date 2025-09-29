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
// static member : thanh vien static
// friend function :ham ban be
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
        static int dem;//bien static
    public:
        SinhVien();//contructor (ham nay khong co kieu tra ve)//co ten trung voi ten class
        SinhVien(string,string,string,double);
        void ThongTinSinhVien();//co the khai ham ben trong lan ben ngoai
        void inThongTinSinhVien();
        double getGpa();
        void tangDem();
        int getDem();
        // ~SinhVien();//ham huy
};

int SinhVien::dem=0; //

void SinhVien::tangDem(){
    ++dem;
}

int SinhVien::getDem(){
    return dem;
}

// Implementation

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

// SinhVien::~SinhVien(){
//     // cout<<"doi tuong duoc huy tai day\n";
// }

// nhap thong tin sinh vien
void SinhVien::ThongTinSinhVien(){
    ++dem;//dem 1
    this->id = "SV" + string(3 - to_string(dem).length(),'0') + to_string(dem);
    cout<<"nhap ten: ";getline(cin,ten);
    cout<<"nhap ns: ";cin>> ns;
    cout<<"nhap diem: ";cin>>gpa;
    cin.ignore();
}
// in thong tin sinh vien
void SinhVien::inThongTinSinhVien(){
    cout<<this->id<<" "<<this->ten<<" "<<this->ns<<" "<<fixed<<setprecision(2)<<this->gpa<<endl;
}

// double SinhVien::getGpa(){
//     return this->gpa;//return gpa
// }

// bool cmp(SinhVien a,SinhVien b){
//     return a.getGpa() > b.getGpa();
// }

int main(){
    SinhVien x;
    x.ThongTinSinhVien();
    x.inThongTinSinhVien();
    SinhVien y;
    y.ThongTinSinhVien();
    y.inThongTinSinhVien();
    return 0;
} 