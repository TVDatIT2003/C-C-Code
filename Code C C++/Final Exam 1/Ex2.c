#include <stdio.h>

void Checkprimenumber(int n){
    int count = 0;
    if (n < 2){
        printf ("%d is not a prime nmumber.", n);
    } else{
        for (int i = 2; i<= n/2; i++){
            if (n % i == 0){
                printf("%d is not a prime nmumber.\n", n);
                return;
            }
        } printf("%d is a prime nmumber.\n", n);
    }
}

int main(){
    int n, count= 0;
    printf("Input number: ");
    scanf("%d", &n);
    Checkprimenumber(n);
    return 0;
}