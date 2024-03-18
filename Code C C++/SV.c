#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 100

struct SV{
    int stt;
    char ten[size];
    char mssv[2];
};

int main(){
    struct SV s[3];
    for(int i =1; i<=3; i++){
    printf("Nhap so thu tu: ");
    scanf("%d", &s[i].stt);
    printf("Nhap ten: ");
    scanf("%s", &s[i].ten);
    printf("Nhap MSSV: ");
    scanf("%s", &s[i].mssv);
    printf("SV%d: %d %s %s\n\n",i, s[i].stt, s[i].ten, s[i].mssv);
    }
    
    return 0;
}