#include <stdio.h>

int main()
{
    int a, b, c, Max, Min;
    float Avg;
    /* declare a,b,c*/
    printf("Nhap so a\n");
        scanf( "%d", &a);
    printf("Nhap so b\n");
        scanf( "%d", &b);
    printf("Nhap so c\n");
        scanf( "%d", &c);
    /* Find Max*/
    Max = a;
    if (b > Max) Max = b;
    if (c > Max) Max = c;
    printf("Max= %d\n", Max);
    /* Find Min*/
    Min =a;
    if (b < Min) Min = b;
    if (c < Min) Min = c;
    printf("Min = %d\n", Min);
    /*Find Average*/
    Avg = (a +b + c)/3;
    printf("Average = %0.1f\n",Avg);
    return 0;    
}