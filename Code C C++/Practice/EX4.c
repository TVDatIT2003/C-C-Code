#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 100

struct Point {
    int x,y;
};
struct Point A,B,C;

int main(){
    printf("Nhap toa do A: ");
    scanf("%d %d", &A.x, &A.y);
    printf("Nhap toa do B: ");
    scanf("%d %d", &B.x, &B.y);
    printf("Nhap toa do C: ");
    scanf("%d %d", &C.x, &C.y);
    double AB, BC, CA, p, Area;
    AB = sqrt((A.y -B.y)*(A.y-B.y)+(A.x-B.x)*(A.x-B.x));
    BC = sqrt((B.y -C.y)*(B.y-C.y)+(B.x-C.x)*(B.x-C.x));
    CA = sqrt((C.y -A.y)*(C.y-A.y)+(C.x-A.x)*(C.x-A.x));
    p = (AB + BC + CA)/2;
    Area = sqrt(p*(p-AB)*(p-BC)*(p-CA));
    printf("Area = %0.2f", Area);
    return 0;
}
