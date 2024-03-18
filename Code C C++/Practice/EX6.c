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
    double distance =0, sum=0;
    for(int i = 0; i< 2; i++){
        scanf("%d %d %d", &p[i].x, &p[i].y, &m[i].radius);
    }  
    distance = sqrt((p[0].y -p[1].y)*(p[0].y-p[1].y)+(p[0].x-p[1].x)*(p[0].x-p[1].x));
    printf("\n");   
    if (distance <= abs(m[0].radius - m[1].radius)){
        printf("Two circles do not intersect at two points.\n");
    } else if (distance < m[0].radius + m[1].radius){
        printf("Two circles intersect at two points.\n");
    } else printf("Two circles do not intersect at two points.\n");
    return 0;
}