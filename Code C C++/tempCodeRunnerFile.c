#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 100

struct Point{
    float x,y;
};
double distance(struct Point a, struct Point b){
    return sqrt((a.y -b.y)*(a.y-b.y)+(a.x-b.x)*(a.x-b.x));
}

int main(){
    int n;
    printf("Nhap so luong diem: ");
    scanf("%d", &n);
    struct Point point[n];
    for (int i = 0; i< n; i++){
        printf("Nhap toa do: ");
        scanf("%f %f", &point[i].x, &point[i].y);
    }
    /*printf("Diem trung: \n");
    for (int i = 1; i< n; i++){
        if((point[i].x == point[0].x) && (point[i].y == point[0].y)){
            printf("%0.2f %0.2f\n", point[i].x, point[i].y);
        }
    }*/

    for(int i =1; i< n; i++){
        printf("Khoang cach tu diem dau tien den diem [%d]: %0.2f\n", i, distance(point[0], point[i]));
    }
    return 0;
}
