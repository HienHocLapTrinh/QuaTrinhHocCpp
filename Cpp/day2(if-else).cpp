/*1
Viết một chương trình C++ để nhập lương nhân viên, tính thuế thu nhập và lương ròng (số tiền lương thực sự mà nhân viên đó nhận được). Với các thông số giả sử như sau (không theo luật lương, chỉ là con số giả sử để dễ tính toán):

30% thuế thu nhập nếu lương là 15 triệu.
20% thuế thu nhập nếu lương từ 7 đến 15 triệu.
10% thuế thu nhập nếu lương dưới 7 triệu.
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int thuesuat;
//     float luong, luongrong, sothue = 0;
//     cout<<"nhap so luong(VND): ";
//     cin>> luong; 
//     if (luong > 15){
//         thuesuat=30;
//         sothue=luong* thuesuat/100;
//     } else if (luong >= 7){
//         thuesuat=20;
//         sothue=luong* thuesuat/100;
//     } else thuesuat=10;
//     sothue=luong* thuesuat/100;
//     luongrong = luong - sothue;
//     cout<<"luong ban nhan duoc la: "<< luongrong  <<"tr (VND)"<< " voi he so thue la: "<< thuesuat<<"%" << endl;
//     cout<<"so thue ban phai chiu la "<< sothue<<"tr (VND)";
//     return 0;
// }

/*2
Bài tập C++ về IF ELSE 2
Viết chương trình C++ để nhập tuổi và in ra kết quả nếu tuổi học sinh đó không đủ điều kiện vào học lớp 10. Biết tuổi vào lớp 10 của học sinh là 16.
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int tuoi;
//     cout<< "nhap so tuoi: ";
//     cin>> tuoi;
//     if (tuoi>=16){
//         cout<<"da du tuoi va lop 10 ";
//     } else cout<<"chua du tuoi vao lop 10";
//     return 0;
// }

/*3
Viết chương trình C++ để nhập một số nguyên bất kỳ từ bàn phím và in kết quả ra màn hình để thông báo cho người dùng biết số đó lớn hay nhỏ hơn 100
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout <<"nhap 1 so nguyen: ";
//     cin>>a;
//     if (a>100){
//         cout<< a << " lon hon 100";
//     } else cout << a << " nho hon 1oo";
//     return 0;
// }

/*4
Viết chương trình C++ để người dùng nhập vào 3 số nguyên và tìm số lớn nhất trong 3 số đó.
*/
// #include <iostream>
// using namespace std;
// int main(int argc, char *argv[])
// {
//     int a1,a2,a3,max;
//     cout<<"nhap 3 so nguyen: ";
//     cin>>a1>>a2>>a3;
//     max=a1;
//     if (max<a2) max=a2;
//     if (max<a3) max=a3;
//     cout<< max<< " la so lon nhat";
//     return 0;
// }

/*5
Viết chương trình C++ xếp hạng học lực của học sinh dựa trên các điểm bài kiểm tra, điểm thi giữa kỳ, điểm thi cuối kỳ. Nếu:

Điểm trung bình >= 9.0 là hạng A.
Điểm trung bình >=7.0 và < 9.0 là hạng B
Điểm trung bình >=5.0 và < 7.0 là hạng C
Điểm trung bình <5.0 là hạng F
*/
// #include <iomanip> // de dung "setprecision" 
// #include <iostream>
// using namespace std;
// int main(){
//     float diem_bai_kiem_tra, diem_thi_giua_ki, diem_thi_cuoi_ki, diem_trung_binh;
//     cout<<"diem bai kiem tra: ";
//     cin>> diem_bai_kiem_tra;
//     cout<<"diem thi giua ki: ";
//     cin>> diem_thi_giua_ki;
//     cout<<"diem thi cuoi ki: ";
//     cin>>diem_thi_cuoi_ki;
//     diem_trung_binh= (diem_bai_kiem_tra + diem_thi_giua_ki + diem_thi_cuoi_ki)/3;
//     if (diem_trung_binh>=9.0){
//         cout<<diem_trung_binh<<" hoc sinh duoc hang A";
//     } else if (diem_trung_binh>=7.0) {
//         cout<<diem_trung_binh<<" hoc sinh duoc hang B";
//     } else if (diem_trung_binh>=5.0){
//         cout<<diem_trung_binh<<" hoc sinh duoc hang C";
//     } else cout<<setprecision(2)<<diem_trung_binh<<" hoc sinh duoc hang F";

//     return 0;
// }

/*Viết chương trình C++ để tìm nghiệm của phương trình bậc hai ax2 + bx + c = 0. Biết rằng:

Nếu a và b cùng bằng 0 thì phương trình vô nghiệm.
Nếu a=0 thì phương trình có một nghiệm là (-c/b).
Nếu b2-4ac < 0, thì phương trình vô nghiệm.
Nếu không, phương trình có hai nghiệm, dùng công thức tính nghiệm để tính.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char*argv[]){
    float a,b,c,x1,x2,x;
    cout<<"phuong trinh co dang ax^2+bx+c=0"<<endl;
    cout<<"nhap a, b, c: ";
    cin >> a >> b >> c;
    float denta = (b*b - 4*a*c);
    if (a==0 && b==0 && c==0){
        cout<<"phuong trinh co vo so nghiem";
        return 0;
    } else if (a==0 && b==0){
        cout<<"phuong trinh vo nghiem";
        return 0;
    } else if (a==0){
        // x= -c/b;
        cout<<"phuong trinh co 1 nghiem: " << -c <<"/"<< b;
        return 0;
    } else if (denta<0){
        cout<<"phuong trinh vo nghiem";
    } else x1= (-b + sqrt(denta))/(2*a);
            x2=(-b - sqrt(denta))/(2*a);
            cout << "phuong trinh co 2 nghiem : x1 = "<< x1 << " x2: "<< x2 ;
    return 0;
}