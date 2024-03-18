#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 100

typedef struct Point{
    int x,y;
}point;
struct Circle {
    Point center;
    int radius;
};
struct Circle m,n;

int main(){
    point p[2];
    for(int i = 0; i< 2; i++){
        scanf("%d %d %d", p[i].x, p[i].y, m.radius);
    }      
    return 0;
}