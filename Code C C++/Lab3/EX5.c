#include <stdio.h>
void sort(int arr[], int n){
    int i, j;
    j = 0;
    for (i = 0; i < n; i++){
        if(arr[i] > 0){
            if(i != j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}