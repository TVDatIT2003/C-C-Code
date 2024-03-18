#include <stdio.h>

int main()
{
    int total;
    int count=0;
    for(int i=0; i<=30; i++){
        for(int j= 0; j<=15; j++){
            for (int k=0; k<=6; k++){
                for (int l=0; k<=3; l++){
                    total = i*1+j*2+k*5+l*10;
                    if (total == 30){
                        printf("%d notes 1000, %d notes 2000, %d notes 5000, %d notes 10000\n", i,j,k,l);
                        count++;
                    }
                }
            }
        }
    }
printf("There are %d situation\n", count);
return 0;
}