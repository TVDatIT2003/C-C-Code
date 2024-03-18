#include <stdio.h>

int findIndex(int *arr, int n, int x){}

int main(){
    int index = -1;
    int arr[1000], n , x;
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i< n; i++){
        scanf("%d ", &arr[i]);
    }
    printf("\n");
    scanf("%d", &x);
    for(int i = 0; i< n; i++){
        if (arr[i] == x){
            index = i;
            break;
        }
    }
    printf("Output: %d", index);
    return 0;
}