#include <stdio.h>
int main()
{
     int n;
     printf("Enter N-digit Number:");
     scanf("%d",&n);
     while (n!=0)
     {
        printf("%d ",n%10);
        n /= 10;
     }
return 0;
}
