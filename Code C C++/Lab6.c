#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swapValue(int x, int y, int z){
        int temp = z;
        z = x;
        x = y;
        y = z;
    }
void swapPointer(int *p, int *q, int *r){
    int temp = *r;
    *r = *p;
    *p = *q;
    *q = temp;
}
void fillArray(int arr[], int max, int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        arr[i] = (rand() % max)  + 1;
    }
    for (int i= 0; i< n; i++){
        printf("a[%d] = %d\n", i, arr[i]);
    }
}
void sortArray(int arr[],int n){
 
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i= 0; i< n; i++){
        printf("a[%d] = %d\n", i, arr[i]);
    }
}
void EX2(){
    int x, y, z;
    int *p, *q, *r;
    x = 6;
    y = 8;
    z = 16;
    p = &x;
    q = &y;
    r = &z;
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of z: %d\n", z);
    printf("Address of p: %p\n", p);
    printf("Address of q: %p\n", q);
    printf("Address of r: %p\n", r);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);
    printf("Value of *r: %d\n", *r);
    swapValue(x,y,z);
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of z: %d\n", z);
    printf("Address of p: %p\n", p);
    printf("Address of q: %p\n", q);
    printf("Address of r: %p\n", r);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);
    printf("Value of *r: %d\n", *r);
    }
void EX3(){
    int x, y, z;
    int *p, *q, *r;
    x = 6;
    y = 8;
    z = 16;
    p = &x;
    q = &y;
    r = &z;
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of z: %d\n", z);
    printf("Address of p: %p\n", p);
    printf("Address of q: %p\n", q);
    printf("Address of r: %p\n", r);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);
    printf("Value of *r: %d\n", *r);
    swapPointer(p,q,r);
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of z: %d\n", z);
    printf("Address of p: %p\n", p);
    printf("Address of q: %p\n", q);
    printf("Address of r: %p\n", r);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);
    printf("Value of *r: %d\n", *r);
}
int main(){
    //EX2;
    //EX2();
    //EX3
    //EX3();
    //EX4
    int n;
    printf("Size of the array: ");
    scanf("%d", &n);
    int *arr = calloc(n, sizeof(int));
    fillArray(arr, 99, n);
    printf("//SORT ARRAY//\n");
    sortArray(arr, n);
    
    printf("//RESIZE//\n");
    
    int m = 2*n;
    int DoubleArr[m];
    for (int i = 0; i < n; i++){
        DoubleArr[i] = arr[i];
    }

    
    srand(time(NULL));
    for (int i = n; i < m; i++){
        DoubleArr[i] = (rand() % 99)  + 1;
    }
    for (int i= 0; i< m; i++){
        printf("a[%d] = %d\n", i, DoubleArr[i]);
    }

    for (int i = 0; i < m; i++){
        for (int j = i+1; j < m; j++){
            if (DoubleArr[j] < DoubleArr[i]){
                int temp = DoubleArr[j];
                DoubleArr[j] = DoubleArr[i];
                DoubleArr[i] = temp;
            }
        }
    }
    for (int i= 0; i< m; i++){
        printf("a[%d] = %d\n", i, DoubleArr[i]);
    return 0;
    }
}