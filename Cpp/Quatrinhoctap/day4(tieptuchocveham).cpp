#include <bits/stdc++.h>
using namespace std;
// viet chuong trinh tinh chan le
// bool chan_le(int i){
//     if (i % 2==0){
//         return true;
//     } else  return false;
// }
// int main(){
//     int n;
//     cin>> n;
//     if (chan_le(n== true)){
//         cout<<"chan";
//     } else cout<<"le";
// }

// Viết chương trình lựa chọn tính diện tích các hình sau: tam giác, hình chữ nhật, hình tròn. Mỗi hình xây dựng một chương trình con tính diện tích hình đó.

// float tam_giac(float a,float b,float c){
//     float chu_vi = (a+b+c)/2;
//     float dien_tich_tam_giac = sqrt(chu_vi*(chu_vi-a)*(chu_vi-b)*(chu_vi-c));
//     return dien_tich_tam_giac;
// }

// float hinh_chu_nhat(float a, float b){
//     float dien_tich_hinh_chu_nhat = a*b;
//     return dien_tich_hinh_chu_nhat;
// }

// float hinh_tron(float a){
//     float dien_tich_hinh_tron = 3.14 * a*2;
//     return dien_tich_hinh_tron;
// }

// int main(){
//     cout<<"chọn tính diện tích các hình sau: tam giác(1), hình chữ nhật(2), hình tròn(3)."<<endl;
//     float a,b,c;
//     int n;
//     cin>> n;
//     switch (n)
//     {
//     case (1):
//         cout<<"nhap do dai 3 canh tam giac: ";
//         cin>>a>>b>>c;
//         cout<<tam_giac(a,b,c);
//         break;
//     case (2):
//         cout<<"nhap do dai 2 canh hinh chu nhat: ";
//         cin>>a>>b;
//         cout<<hinh_chu_nhat(a,b);
//         break;
//     case (3):
//         cout<<"nhap ban kinh hinh tron: ";
//         cin>>a;
//         cout<<hinh_tron(a);
//         break;
//     default: cout<<"khong hop le";
//         break;
//     }
// }
// Xây dựng hàm tính giá trị tuyệt đối của một số nguyên.
// int tri_tuyet_doi(float a){
//     if (a>=0){
//         return a;
//     } else return -a;
// }
// int main(){
//     cout<<"nhap so can tim gia tri tuyet doi: ";
//     int a;
//     cin>>a;
//     cout<<tri_tuyet_doi(a);
// }

//Viết chương trình nhập hai số nguyên M và N. In ra màn hình ước chung lớn nhất và bội chung nhỏ nhất của hai số đó. Xây dựng 2 hàm cho việc trả về 2 giá trị ước chung lớn nhất và bội chung nhỏ nhất.
// int UCLN(int a,int b){
//     while (b!=0){
//         int r=a % b;
//         a=b;
//         b=r;
//     } return a;
// }

// int BCNN(int a, int b){
//     int bcnn= (a+b)/2;
//     return bcnn;
// } 
// int main(){
//     int a,b;
//     cout<<"nhap 2 so nguyen de tim ucln va bcnn: ";
//     cin>>a>>b;
//     cout<<"uoc chung lon nhat "<<UCLN(a,b)<<",boi chung nho nhat: "<<BCNN(a,b);
// }

// //viet ham xac dinh nam nhuan
// bool namnhuan(int n){
//     if ((n % 400 == 0) || ( n % 4 == 0 && n % 100!=0 )){
//         return true;
//     } else return false;
// }

// int main(){
//     int n;
//     cout<<"nhap so nam: ";
//     cin>>n;
//     if (namnhuan(n)){
//         cout<<"day la nam nhuan";   
//     } else cout<<"day la nam thuong";
// }

// sinh 1 số ngẫu nhiên
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
            cout<<sobimat<<" là đúng rồi đó thằng ngu!"<<endl;
        }
    } while (a!=sobimat);
    
    return 0;
}
// int main() {
//     // Tạo bộ sinh số ngẫu nhiên
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<> dist(1, 100);

//     int secret = dist(gen);   // số bí mật từ 1 đến 100
//     int guess;
//     int attempts = 0;
//     // Vòng lặp đoán số
//     do {
//         cout << "Nhap so ban doan: ";
//         cin >> guess;
//         attempts++;

//         if (guess > secret) {
//             cout << "Sai roi! So bi mat nho hon." << endl;
//         } else if (guess < secret) {
//             cout << "Sai roi! So bi mat lon hon." << endl;
//         } else {
//             cout << "Chinh xac! Ban da doan dung sau " 
//                  << attempts << " lan." << endl;
//         }
//     } while (guess != secret);

//     return 0;
// }
