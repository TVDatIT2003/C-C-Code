/*
4. Receive 2 binary numbers using string then return the sum of those two.
Result should use string.
Ex:
 __________________________________________________________
| Input:  111 11                                           |
| Output: 1010                                             |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex4(char s1[], char s2[]){
	//your codes here
int a = 0, b = 0;
	for (int i = 0; i < strlen(s1); i++){
		if (s1[strlen(s1) - i - 1] == '1') a+= pow(2,i);
	}
	for (int i = 0; i < strlen(s2); i++){
		if (s2[strlen(s2) - i - 1] == '1') b+= pow(2,i);
	}
	int c = a+b;
	char *arr = malloc(33);
	int i = 0;
	while (c > 0){
		if ( c % 2 == 0 ) arr[i]='0';
		else arr[i] = '1';
		c/=2;
		i++;
	}
	i--;
	while (i >= 0){
		printf("%c", arr[i]);
		i--;
	}
}

int main(int argc, char *argv[]) {
	char *n1 = argv[1];
    char *n2 = argv[2];

    Ex4(n1,n2);
		
	return 0;
}
