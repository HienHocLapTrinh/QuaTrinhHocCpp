#include<bits/stdc++.h>
// ham dem so chu so cua 1 so nguyen;
int dem_so(int i){
    int dem=1;
    while(i>=10){
        i = i/10;
        dem++;
    }
    return dem;
}
//ham kiem tra so chan le
bool chan_le(int i){
    if (i % 2==0){
        return true;
    } else  return false;
}
//ham tinh dien tich hinh tam giac, hinh chu nhat, hinh tron
float tam_giac(float a,float b,float c){
    float chu_vi = (a+b+c)/2;
    float dien_tich_tam_giac = sqrt(chu_vi*(chu_vi-a)*(chu_vi-b)*(chu_vi-c));
    return dien_tich_tam_giac;
}

float hinh_chu_nhat(float a, float b){
    float dien_tich_hinh_chu_nhat = a*b;
    return dien_tich_hinh_chu_nhat;
}

float hinh_tron(float a){
    float dien_tich_hinh_tron = 3.14 * a*2;
    return dien_tich_hinh_tron;
}

// Xây dựng hàm tính giá trị tuyệt đối của một số nguyên.
int tri_tuyet_doi(float a){
    if (a>=0){
        return a;
    } else return -a;
}

//Viết chương trình nhập hai số nguyên M và N. In ra màn hình ước chung lớn nhất và bội chung nhỏ nhất của hai số đó. Xây dựng 2 hàm cho việc trả về 2 giá trị ước chung lớn nhất và bội chung nhỏ nhất.
int UCLN(int a,int b){
    while (b!=0){
        int r=a % b;
        a=b;
        b=r;
    } return a;
}

int BCNN(int a, int b){
    int bcnn= (a+b)/2;
    return bcnn;
} 

//viet ham xac dinh nam nhuan
bool namnhuan(int n){
    if ((n % 400 == 0) || ( n % 4 == 0 && n % 100!=0 )){
        return true;
    } else return false;
}

//ham kiem tra so nguyen to
bool nt(int a){
    if (a<2){
    return false; 
    } else for (int i=2;i<=sqrt(a);i++){
                if (a%i==0)
                return false;
                }
    return true;
}
//ham kiem tra so thuan nghich
bool tn(int n){
    int rev=0 , tmp = n;
    while (n!=0){
            rev = rev*10 + n%10;
            n/=10;
    }
    return rev==tmp;
}

//////////////////tim max min trong mang
int max(int a[],int n){
    int max_val = a[0];
    for (int i=1;i<n;i++){
        if (max_val<a[i]){
            max_val=a[i];
        } 
    }
    return max_val;
}
int min(int a[],int n){
    int min_val = a[0];
    for (int i=1;i<n;i++){
        if (min_val>a[i]){
            min_val=a[i];
        }   
    }
    return min_val;
}

/*///////////////Lật ngược mảng

Bạn cũng có thể sử dụng code trên để lật ngược một mảng, bạn sẽ xét từng cặp phần tử trong mảng và hoán đối giá trị.*/
void tim_mang_doi_xung(int a[],int n){
    for(int i=0;i<n/2;i++){
        int tmp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=tmp;
    }
}  

// Chú ý : 2 số nguyên tố cùng nhau là 2 số có ước chung lớn nhất bằng 1.
int ucln(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b; 
        b = r;
    }
    return a;
}