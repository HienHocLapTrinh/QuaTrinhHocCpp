#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void ma_tran(int** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 100 + 1;
        }
    }
}

int main() {
    srand(time(0));
    int n=3,m=3;
    // cout<<"Nhap chieu dai va chieu rong cua mang: ";cin>>n>>m;

    // Cấp phát động mảng 2 chiều
    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    ma_tran(a, n, m);

    // In ra ma trận
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < m; j++) {
            Sleep(1000);
            cout << a[i][j] << " ";
        }
        cout << endl;
        
    }
    
    // Giải phóng bộ nhớ
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    system("pause");
    return 0;
}
