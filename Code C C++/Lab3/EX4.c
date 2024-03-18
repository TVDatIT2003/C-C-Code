#include <stdio.h>
int Bai4(int s[1000] , int n){
    int i  = 0 ,  a = 1 , b = 1;
    while ((a == 1 || b == 1) && i < n - 1){
        if (s[i] < s[i+1])
        b = 0;
        else if (s[i] > s[i+1])
        a = 0;
        i++;
    }
    if (a == 1)
    return 1;
    else if (b == 1)
    return -1;
    return 0;
}
int main(){
    int n, s[1000], a = 1, b = 1, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    scanf("%d", &s[i]);
    printf("%d",Bai4(s,n));
    return 0;
}