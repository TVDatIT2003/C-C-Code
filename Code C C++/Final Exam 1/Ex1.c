#include <stdio.h>

void swap (int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int a[1000], n;
    printf("Enter number of array: ");
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i< n; i++ ){
        for(int j = i+1; j< n; j++){
            if(a[j] > a[i]){
                swap(&a[j], &a[i]);
            }
        }
    }
    for(int i = 0; i< n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}
