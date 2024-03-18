-#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>

void bubblesort(int i, int j, int a[],int n){
    
}
void EX1(){
    int n, row =0;
    int a[1000];
    printf("Input M: ");
    scanf("%d", &n);
    //Create array
    if (n < 60 || (n >= 60 && n % 8 != 0)){
        printf("Invalid Number");
    }
    else {
        srand(time(NULL));
        for (int i =0; i < n; i++){
            for (int j = 0; j < n; j++){
                a[j] = rand()% (999-10+1) + 10;
            if (a[j] % 4 == 0){
                a[i] = a[j];
            }
            }
            printf("%4d   ", a[i]);
            row ++;
            if (row == 8){
                printf("\n");
                row = 0;
            }                       
        }
    }
}

int main() {
    EX1();
    return 0;
}