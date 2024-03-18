#include <stdio.h>

int main()
{
    int N;
    int sum =0;
    printf("Enter Number: ");
    scanf("%d", &N);

    for (int i=1; i<=N/2; i++){
        if (N %i ==0){
            sum+=i;
        }
    }
    if (sum == N && N>0){
        printf("%d is a Perfect Number",N);
    }
    else {
     printf("%d is not a Perfect Number",N);
    }
    return 0;
}