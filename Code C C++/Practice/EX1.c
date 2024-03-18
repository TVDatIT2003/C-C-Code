#include <stdio.h>
#include <string.h>

void ReverseString(char* s){
    char *begin_ptr, *end_ptr;
    int length = strlen(s);
    begin_ptr= s;
    end_ptr = s + length -1;
    for (int i =0; i < (length-1)/2; i++){
        int temp = *begin_ptr;
        *begin_ptr = *end_ptr;
        *end_ptr = temp;
        begin_ptr++;
        end_ptr--;
    }
}

int main(){
    char s[100];
    printf("Input: ");
    gets(s);
    printf("\n");
    
    ReverseString(s);

    printf("Output: %s\n", s);
    return 0;
}