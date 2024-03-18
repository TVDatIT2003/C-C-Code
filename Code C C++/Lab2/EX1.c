#include <stdio.h>

int main()
{
    int S, V;
    printf("Number    \tSquare   \tCube\n");
    for (int i= 0; i< 10;)
    {
        i++;
        S= i*i;
        V= i*i*i;
        printf("%d        \t%d       \t%d\n",i, S,V);
    }
return 0;
}