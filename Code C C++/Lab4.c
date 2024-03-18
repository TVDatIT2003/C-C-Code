#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int a[100];
int size;
//EX1
int EX1(){
    int sum,n;
    sum = 0;
    printf("Input value n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        sum += i*(i+1); 
    }
printf("%d", sum);
}
//EX2
double EX2(int n){
    double pi = 0;
    for (int i=1; i<=n; i++ ){
        double sum = (double)1/(i*i);
         pi += (double) sum*6 ; 
    }
    return (double) sqrt(pi);
}
//EX3
int EX3(int n){
    int sum = 0;
    for (int i=1; i<= n/2; i++){
        if(n%i == 0) sum +=i;
    }
    if(sum == n) return 1;
    return 0;
}
//EX4
void Input(){
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
}
void Output(int n){
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
}
//EX5
void EX5(){
    int min =1e9, max = -1e9;
    int min_index, max_index;
    for(int i=0; i<size; i++){
        if (a[i]>max){
            max = a[i];
            max_index = i;
        }
        if(a[i]< min){
            min = a[i];
            min_index = i;
        }
    }
// print Min, Max
    for(int i=0; i<size; i++){
        if(min == a[i])
        printf("Min Index is %d\n", i);
    }
    for(int i=0; i<size; i++){
        if(max == a[i])
        printf("Max index is %d\n",i);
    }
}
//EX6
int EX6(int arr[], int start, int end){
    if (start >= end) return 1;
    if (arr[start] == arr[end]) return EX6(arr, start+1, end+1);
    else return 0;
}
int main() {
 //EX1
    printf("EX1\n");
    EX1();
    printf("\n");
//EX2
printf("EX2\n");
for (int i= 10000; i<= 20000; i+= 1000)
printf("%d\t%f\n", i , EX2(i));
//EX3
    printf("EX3\n");
    for (int i=1; i<=1000; i++){
        if(EX3(i))
        printf("%d\n",i);
    }
//EX4
printf("EX4\n");
Input();
//EX5
printf("EX5\n");
EX5();
//EX6
printf("EX6\n");
if(EX6(a,0, size -1))
printf("Yes\n");
else printf("No\n");
return 0;
}