#include<stdio.h>
int arr[100] ; 
int odd_num[100];
int odd_order[100];
int odd_order_start = 0 ; 
int even_order_start = 0 ;
int odd_size = 0;
int even_num[100];
int even_size = 0;
int even_order[100];
void Increase_arr_of_odd(){
   for(int i=0;i<odd_size;i++){
        for(int j=i+1;j<odd_size;j++){
             if(odd_num[i]>odd_num[j]){
                 int temp = odd_num[i];
                 odd_num[i]=odd_num[j];
                 odd_num[j]=temp;
             }
        }
   }
}
void Decrease_arr_of_even(){
   for(int i=0;i<even_size;i++){
        for(int j=i+1;j<even_size;j++){
             if(even_num[i]<even_num[j]){
                 int temp = even_num[i];
                 even_num[i]=even_num[j];
                 even_num[j]=temp;
             }
        }
   }
}
void Sort_array(int arr[100] , int arr_size){
    for(int i=0;i<arr_size;i++){
       if(arr[i]%2!=0){
           odd_num[odd_size++]=arr[i]; 
           odd_order[odd_order_start++]=i; 
       }else{
           even_num[even_size++]=arr[i];
           even_order[even_order_start++]=i;
       }
    }
    Increase_arr_of_odd();
    Decrease_arr_of_even();
    int start_odd = 0;
    int start_even = 0;
    for(int i=0;i<odd_order_start;i++){
        arr[odd_order[i]] = odd_num[start_odd];
        start_odd++;
    }
    for(int i=0;i<even_order_start;i++){
        arr[even_order[i]] = even_num[start_even];
        start_even++;
    }
    for(int i=0;i<arr_size;i++)
     printf("%d ",arr[i]);
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Sort_array(arr, n);
    return 0;
}   