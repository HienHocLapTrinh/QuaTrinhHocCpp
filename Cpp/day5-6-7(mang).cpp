#include <bits/stdc++.h>
using namespace std;
#include <ham.h>
// bool nt(int a){
//     if (a<2){
//     return false; 
//     } else for (int i=2;i<=sqrt(a);i++){
//                 if (a%i==0)
//                 return false;
//                 }
//     return true;
// }

// int main(){
//     int n=10;
//     int a[n]={2, 3, 19, 88, 100, 28, 47, 31, 14, 25};
//     cout<<"cac so nguyen to trong mang: ";
//     for (int i=0;i<n;i++){
//         if (nt(a[i])){
//         cout<<a[i]<<" ";
//         }
//     }
//     return 0;
// }


// bool tn(int n){
//     int rev=0 , tmp = n;
//     while (n!=0){
//             rev = rev*10 + n%10;
//             n/=10;
//     }
//     return rev==tmp;
// }


// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     int dem=0;
//     //nhap vao 1 mang
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     // dem bao nhieu so thuan nghich
//     for (int i=0;i<n;i++){
//         if (tn(a[i])){
//             dem++;
//         }
//     }
//     //in so dem duoc
//     cout<<"co "<<dem<<" so thuan nghich trong mang\n";
//     cout<<"cac con so thuan nghich trong mang la: ";
//     //in cac so thuan nghich
//     for (int i=0;i<n;i++){
//         if (tn(a[i])){
//             cout<<a[i]<<" ";
//         }
//     }
//     return 0;
// }

/*2.Tìm Max, Min

Để tìm phần tử lớn nhất (nhỏ nhất) trong mảng ta có thể làm như sau :  

1.Giả sử phần tử đầu tiên trong mảng là lớn nhất /(nhỏ nhất)
2.Duyệt các phần tử còn lại trong mảng và so sánh sau đó cập nhật giá trị cho biến lớn nhất /(nhỏ nhất) */
// int max(int a[],int n){
//     int max_val = a[0];
//     for (int i=1;i<n;i++){
//         if (max_val<a[i]){
//             max_val=a[i];
//         } 
//     }
//     return max_val;
// }
// int min(int a[],int n){
//     int min_val = a[0];
//     for (int i=1;i<n;i++){
//         if (min_val>a[i]){
//             min_val=a[i];
//         }   
//     }
//     return min_val;
// }

// int  main(){
//     // nhap mang
//     int n;
//     cin>>n;
//     int a[n];
//     cout<<"nhap cac so trong mang: ";
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"so lon nhat la: "<<max(a,n)<<endl;  
//     cout<<"so nho nhat la: "<<min(a,n)<<endl;
//     return 0;
// }

/*Kiểm tra mảng đối xứng

Để kiểm tra mảng đối xứng bạn cần xét các cặp phần tử đối xứng với nhau, nếu 2 phần tử này có giá trị
khác nhau có thể kết luận luôn mảng không đối xứng.

Xét thấy phần tử có chỉ số i thì phần tử đối xứng với nó sẽ có chỉ số n - i - 1, số cặp mà bạn cần phải
xét sẽ là N / 2 với N là số lượng phần tử trong mảng. Ví dụ với mảng có 6 phần tử bạn cần xét 3 cặp, 5 phần
tử bạn cần xét 2 cặp vì phần tử chính giữa sẽ đối xứng với chính nó nên không cần kiểm tra.*/
// bool tim_mang_doi_xung(int a[],int n){
//     for(int i=0;i<n/2;i++){
//         if (a[i]!=a[n-i-1])
//         return false;
//     } 
//     return true;
// }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
// int main(){
//     int n;
//     cin>>n;
//     cout<<"nhap 1 mang: ";
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     if(tim_mang_doi_xung(a,n)){
//         cout<<"day la mamg doi xung";
//     } else
//         cout<<"day khong phai mang doi xung";
//     return 0;
// }

/*Lật ngược mảng

Bạn cũng có thể sử dụng code trên để lật ngược một mảng, bạn sẽ xét từng cặp phần tử trong mảng và hoán đối giá trị.*/
// void tim_mang_doi_xung(int a[],int n){
//     for(int i=0;i<n/2;i++){
//         int tmp = a[i];
//         a[i]=a[n-i-1];
//         a[n-i-1]=tmp;
//     }
// }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
// int main(){
//     // nhap mang
//     int n;
//     cout<<"nhap so luong phan tu trong mang ";
//     cin>>n;
//     cout<<"nhap 1 mang: ";
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     tim_mang_doi_xung(a,n);
//     // in ra mang da qua lat nguoc
//     for (int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

/*Dạng bài tập này sẽ yêu cầu các bạn xét tất cả các cặp phần tử trong mảng A[] có N phần tử và kiểm tra tính chất của các cặp này, ví dụ đếm số cặp phần tử nguyên tố cùng nhau trong mảng, đếm cặp số có tổng bằng K ...

Thuật toán : 

Duyệt qua các chỉ số i từ 0 tới N - 2
Đối với mỗi chỉ số i sẽ xét các chỉ số j từ i + 1 tới N - 1 
Xét cặp A[i], A[j] 
Ví dụ mảng A[] = {3, 8, 9, 1, 10}

i = 0 : j = 1, 2, 3, 4 ta sẽ có các cặp A[i], A[j] lần lượt là (3, 8), (3, 9), (3, 1), (3, 10)
i = 1 : j = 2, 3, 4 ta sẽ có các cặp A[i], A[j] lần lượt là (8, 9), (8, 1), (8, 10)
i = 2 : j = 3, 4 ta sẽ có các cặp A[i], A[j] lần lượt là (9, 1), (9, 10)
i = 3 : j = 4 ta sẽ có các cặp A[i], A[j] lần lượt là (1, 10) 

*/
// Bài 1 : Liệt kê các cặp có tổng bằng K cho trước
// int main(){
//     int n=10,tong=10;
//     int a[10]={1,8,9,2,3,6,7,4,5,5};
//     for (int i=0;i < n-1;i++){
//         //a[i]
//         for(int j=i+1;j<n;j++){
//             if (a[i]+a[j]==10){
//                 cout<<a[i]<<" "<<a[j]<<"|";
//             }
//         }
//     }
//     return 0;
// }

/*Bài 2 : Đếm số cặp nguyên tố cùng nhau trong mảng

Chú ý : 2 số nguyên tố cùng nhau là 2 số có ước chung lớn nhất bằng 1.*/
// int ucln(int a, int b){
//     while(b != 0){
//         int r = a % b;
//         a = b; 
//         b = r;
//     }
//     return a;
// }


// int main(){
//     int n = 10;
//     int a[10] = {2, 4, 6, 8, 5, 18, 20, 14, 10, 100};
//     for(int i=0;i<n-1;i++){
//         //a[i]
//         for(int j=i+1;j<n;j++){
//             if (ucln(a[i],a[j])) {
//                 cout<<a[i]<<" "<<a[j]<<endl;
//             }
//         }
//     }
// }

// //tim so lon nhat
// int max(int a[],int n){
//     int max_val=a[0];
//     for (int i=1;i<n;i++){
//         if (max_val<a[i]){
//             max_val=a[i];
//         }
//     }
//     return max_val;
// }

// int main(){
//     int n=10;
//     int a[n]={1,2,3,4,5,6,7,8,9,10};
//     cout<<max(a,n);
// }


// /*1. Viết chương trình C++ nhập 10 giá trị nguyên, sau đó tìm giá trị lớn nhất, nhỏ nhất, tìm giá trị có tần suất xuất hiện nhiều nhất, 
// sắp xếp mảng theo thứ tự tăng dần, giảm dần và hiển thị kết quả.*/
// int max(int a[], int n){
//     int max_val=a[0];
//     for(int i=0;i<n;i++){
//         if (max_val<a[i]){
//             max_val=a[i];
//         }
//     }
//     return max_val;
// }

// int min(int a[],int n){
//     int min_val=a[0];
//     for (int i=0;i<n;i++){
//         if (min_val>a[i]){
//             min_val=a[i];
//         }
//     }
//     return min_val;
// }

// int tan_xuat(int a[],int n){
//     int dem=0;
//     for (int i=0;i<n-1;i++){
//         //a[i]
//         for(int j=i+1;j<n;j++){
//             //a[j]
//             if (a[i]==a[j]){
//                 dem++;
//             }
//         }
//     }
//     return dem;
// }

// void sap_xep_tang_dan(int a[],int n){
    
//     for (int i=0;i<n-1;i++){
//         int min=i;
//         for (int j=i+1;j<n;j++){
//             if (a[j]<a[min]){
//                 min=j;
//             }
//         }swap(a[i],a[min]);
//     }
// }

// void sap_xep_giam_dan(int a[],int n){
    
//     for (int i=0;i<n-1;i++){
//         int max=i;
//         for (int j=i+1;j<n;j++){
//             if (a[j]>a[max]){
//                 max=j;
//             }
//         }swap(a[i],a[max]);
//     }
// }
//     // int a[n]={4,5,2,1,3};
// int main(){
//     // int n;
//     // cin>>n;
//     // cout<<"nhap so gia tri mang: ";
//     // int a[n];
//     // for(int i=0;i<n;i++){
//     //     cin>>a[i];
//     // }
//     int n=5;
//     int a[n]={7,7,3,2,7,8,9,9};
//     cout<<max(a,n)<<endl;
//     cout<<min(a,n)<<endl;
//     cout<<tan_xuat(a,n)<<endl;
//     sap_xep_tang_dan(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }

//     sap_xep_giam_dan(a,n);
//         for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

int main(){
    // int n;
    // cin>>n;
    // int j;
    // cin>>j;
    // int a[n][j];
    // for (int i=0;i<n;i++){
    //     cin>>a[n][j];
    // }
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for (int x :a){
        cout<<x<<" ";
    }
    return 0;
}