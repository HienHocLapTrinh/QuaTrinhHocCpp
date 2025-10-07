#include "thuvien.h"
#include "include.h"
#include <iostream>
#define MAX 100
using namespace std;
// ========== game ran san moi don gian ===========
int sl=1;
int toadox[MAX], toadoy[MAX];
void khoi_tao_ran(int toadox[], int toadoy[]);
void ve_ran(int toadox[], int toadoy[]);
void xoa_du_lieu_cu(int toadox[],int toadoy[]);
void xu_ly_ran(int toadox[],int toadoy[],int x,int y,int &xdiem,int &ydiem);
void them_phan_tu_dau_mang(int a[],int x);
void xoa_phan_tu_cuoi_mang(int a[],int vt);
bool kt_ran_cham_khung(int x0,int y0);
bool kt_ran_cham_duoi(int toadox[],int toadoy[]);
bool kt_ran(int toadox[],int toadoy[]);
void tao_diem(int &xdiem,int &ydiem,int toadox[],int toadoy[]);
bool kt_ran_de_diem(int xdiem,int ydiem,int toadox[],int toadoy[]);
bool kt_ran_an_diem(int x0,int y0,int xdiem,int ydiem);
int main(){
    int x=50,y=15;//vi tri dau tien
    bool gameover=false;
    int toadox[MAX], toadoy[MAX];
    khung();//ve khung
    //tao ran
    khoi_tao_ran(toadox,toadoy);
    ve_ran(toadox,toadoy);
    // kiem tra va tao diem
    srand(time(NULL));
    int xdiem=0, ydiem=0;
    tao_diem(xdiem,ydiem,toadox,toadoy);
    int check =2;
    // khoi dong game
    while (gameover==false){
        // ==========backspace (xoa vi tri cu roi ve lai vi tri moi)
        xoa_du_lieu_cu(toadox,toadoy);
        
        //0 cham bien tren - di xuong
        //1 cham bien duoi - di len
        //2 cham bien phai - di trai
        //3 cham bien trai - di phai
        // dieu khien ran
        if (kbhit()){
            char kitu = _getch();
            if (kitu == -32){ // phim mui ten
                kitu = getch();
                if (kitu== 72 && check!=0){ // len
                    check =1;
                }else if (kitu==80 && check!=1){ // xuong
                    check =0;
                }else if (kitu==77 && check!=3){ //di phai
                    check =2;
                }else if (kitu==75 && check!=2){ //di trai
                    check =3;
                }
            }
        }        
        // ================ thuc hien di chuyen
        if (check==0){
            // di xuong
            y++;
        }else if (check==1){
            // di len
            y--;
        }else if (check==2){
            // di phai
            x++;
        }else if (check==3){
            // di trai
            x--;
        }
        xu_ly_ran(toadox,toadoy,x,y,xdiem,ydiem);
        // ========== kiem tra ===========
        gameover = kt_ran(toadox,toadoy);
        Sleep(200);
    }
    _getch();
    return 0;
}

// khoi tao ran
void khoi_tao_ran(int toadox[], int toadoy[]){
    int x=50, y=15;
    for (int i=0;i<sl;i++){
        toadox[i]=x;
        toadoy[i]=y;
        x--;
    }
}
// ve ran
void ve_ran(int toadox[], int toadoy[]){
    for (int i=0;i<sl;i++){
        gotoXY(toadox[i],toadoy[i]);
    if(i==0){
        cout<<"0";
    }else cout<<"o";
    }
}
void xoa_du_lieu_cu(int toadox[],int toadoy[]){
    for (int i=0;i<sl;i++){
        gotoXY(toadox[i],toadoy[i]);
        cout<<" ";
    }
}
void them_phan_tu_dau_mang(int a[],int x){
    for (int i=sl;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=x;
    sl++;
}
void xoa_phan_tu_cuoi_mang(int a[],int vt){
    for (int i=vt;i<sl;i++){
        a[i]=a[i+1];
    }
    sl--;
}
// xu ly ran
void xu_ly_ran(int toadox[],int toadoy[],int x,int y,int &xdiem,int &ydiem ){
    // them toa do moi vao dau mang
    them_phan_tu_dau_mang(toadox,x);
    them_phan_tu_dau_mang(toadoy,y);
        // xoa toa do cuoi mang
    if (kt_ran_an_diem(xdiem,ydiem,toadox[0],toadoy[0])==false){
        xoa_phan_tu_cuoi_mang(toadox,sl-1);
        xoa_phan_tu_cuoi_mang(toadoy,sl-1);
    } else{
        tao_diem(xdiem,ydiem,toadox,toadoy);
    }
    // ve ran
    ve_ran(toadox,toadoy);
}
// kiem tra
bool kt_ran_cham_khung(int x0,int y0){
    // ran cham tuong tren
    if (y0==1&&(x0>=10 && x0<=100)){
        return true;//gameover
    } //ran cham tuong duoi
    else if (y0==26 &&(x0>=10 && x0<=100)){
        return true;//gameover
    } // tuong phai
    else if (x0==100 &&(y0>=1 && y0<=26)){
        return true;
    } //tuong trai
    else if (x0==10 &&(y0>=1 && y0<=26)){
        return true;
    }
    return false;
}
bool kt_ran_cham_duoi(int toadox[],int toadoy[]){
    for (int i=1;i<sl;i++){
        if (toadox[0]==toadox[i]&&(toadoy[0]==toadoy[i])){
            return true;//gameover
        }
    }
    return false;
}
// ham kiem tra gameover
bool kt_ran(int toadox[],int toadoy[]){
    bool kt1 = kt_ran_cham_duoi(toadox,toadoy);
    bool kt2 = kt_ran_cham_khung(toadox[0],toadoy[0]);
    if (kt1==true || kt2==true){
            return true;
        }
    return false;
}
void tao_diem(int &xdiem,int &ydiem,int toadox[],int toadoy[]){
    do{
        xdiem=rand()%(99-11+1)+11;
        ydiem=rand()%(25-2+1)+2;
    }while (kt_ran_de_diem(xdiem,ydiem,toadox,toadoy)==true);
    int i=rand()%(15-1+1)+1;
    SetColor(i);
    gotoXY(xdiem,ydiem);
    cout<<"#";
    SetColor(7);
}
bool kt_ran_de_diem(int xdiem,int ydiem,int toadox[],int toadoy[]){
    for (int i=0;i<sl;i++){
        if (xdiem==toadox[i]&&(ydiem==toadoy[i])){
            return true;//ran de len diem
        }
    }
    return false;
}

bool kt_ran_an_diem(int x0,int y0,int xdiem,int ydiem){
    if ((x0==xdiem) && (y0==ydiem)){
        return true;//ran an qua
    }
    return false;
}