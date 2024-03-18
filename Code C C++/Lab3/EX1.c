#include <stdio.h>
#define SIZE 99
void EX1(int n, int a[])
{
    int j=0;
    for (int i=0; i<n;i++){
        if (a[i] != a[n-i-1]){
            j++;
        }
    }
    if (j == 0) printf("\n\n Symmetric\n");
    else printf(" Not symmetric\n");
}
void EX2()
{

}
void EX3()
{
    
}
void EX4()
{

}
void EX5(int n, int a[])
{
    int temp, j,i;
    for (i=0; i<= SIZE-1; i++)
        for (j=0; j<= SIZE -2; j++)
            if( a[j]>0)
            {
                temp= a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
    for (i=0; i<SIZE; i++)
    printf("%d", a[i]);
}

int main()
{
//EX1
    int n;
    printf("EX1\n");
    printf("Input n integers:\n");
    scanf ("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
     for (int i = 0; i<n; i++){
        printf("%d", a[i]);
     }
    EX1(n,a);
    printf("****************************\n");   
//EX5
}

