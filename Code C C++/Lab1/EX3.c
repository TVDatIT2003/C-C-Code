#include <stdio.h>
int main()
{
    int i, prime, N, n;

    printf("Nhap so N: ");
    scanf("%d",&N);
    printf("Output: ",N);

    for(n=2; n<N; n++)
    {
        prime = 1;
        for(i=2; i<n; i++)
            if(n%i == 0)
            {
                prime = 0;
                break;
            }
        if(prime)
            printf(" %d ",n);
    }

    printf("\n");
    
}

