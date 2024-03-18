#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 100

typedef struct Point{
    int x,y;
}point;
struct Circle {
    point center;
    int radius;
};
struct Circle m[2];

int main(){
    point p[2];
    for(int i = 0; i< 2; i++){
        scanf("%d %d %d", &p[i].x, &p[i].y, &m[i].radius);
    }  
    printf("\n");    
    printf("%0.2f %0.2f", 3.14*m[0].radius*m[0].radius,3.14*m[1].radius*m[1].radius );
    return 0;
}