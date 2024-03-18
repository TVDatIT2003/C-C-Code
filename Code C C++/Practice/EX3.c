#include <stdio.h>
#include <string.h>

int main(){
    int length;
    char str[100];
    printf("Input string: ");
    fgets(str, sizeof(str), stdin);
    printf("\n");

    length = strlen(str);
    for (int i = 0; i< length; i++){
        while ((str[i] == ' ' ))
        {
            for(int j = i; j< length-1; j++){
                str[j] = str[j+1];   
            }
            str[length-1]= "\0";
            length--;
        }
        
        
    }

    printf("Output: %s\n", str);
    return 0;
}
