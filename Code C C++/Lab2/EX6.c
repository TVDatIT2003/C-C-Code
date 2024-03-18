#include <stdio.h>

int main()
{
    int N; 
    printf("Input integer N: ");
    scanf("%d",&N);
    for (int i=1; i<=N; i++){
        for (int j=N-i;j > 0; j--)
        printf(" ");
        for (int k=1; k<=i;k++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}