#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    int count = 0,n;
    printf("Input string: ");
    gets(str);
    n = strlen(str);
    for(int i = 0; i< n; i++){
        count = 1;
        if (str[i]){
            for (int j = i+1; j< n; j++){
            if (str[i] == str[j]){
                count ++;
                str[j] = '\0';
            }
        }
        printf("'%c' = %d\n", str[i], count);
        }
    }
    return 0;
}