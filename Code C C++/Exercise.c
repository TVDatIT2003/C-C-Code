#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct point {
    float x,y;
}

struct triangle {
    struct point A,B,C;
};

struct line {
    struct point A;
    struct point B;
};

void inputPoint(){
    struct point A;
    scanf("%f", &A.x);
    scanf("%f", &A.y);
    struct point B;
    scanf("%f", &B.x);
    scanf("%f", &B.y);
    struct point C;
} 
//Check two point are the same;
void checktwopoint(struct point A,struct point B){
    if (A.x == B.y && A.y == B.y){
        printf("Two points are the same\n");
    } else printf("Two points are not the same");
}
int main() {
    struct point A;
    struct point B;
    inputPoint();
    checktwopoint(struct point A,struct point B);
}