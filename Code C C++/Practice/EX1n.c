#include <stdio.h>
#include <string.h>

int main(){
    char *s;
    int length;
    printf("Input: ");
    gets(s);
    length = strlen(s);
    printf("Output: ");
    for (int i = length-1; i>= 0; i--){
        printf("%c", *(s+i));
    }
    return 0;
}
