/*
3. Receive 2 complex numbers using string then return a string
that represent the product of those two. Result should use string.
Complex number has the form of a+bi (i2 = -1, b can be negative or positive)
Ex:
 __________________________________________________________
| Input: 3+2i 3+2i                                         |
| Output: 5+12i                                            |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex3(char s1[], char s2[]){
	//your codes here
	char *a1 = malloc(strlen(s1)), *a2 = malloc(strlen(s2)), *b1 = malloc(strlen(s1)), *b2 = malloc(strlen(s2));
	memset(a1, 0, strlen(s1));
	memset(a2, 0, strlen(s2));
	memset(b1, 0, strlen(s1));
	memset(b2, 0, strlen(s2));
	int index1, index2;
	for (int i = 1; i < strlen(s1); i++){
		if (s1[i] == '+'  || s1[i] == '-'){
			index1 = i;
		}
	}
	for (int i = 1; i< strlen(s2); i++){
		if (s2[i] == '+' || s2[i] == '-'){
			index2 = i;
		}
	}

	strncpy(a1, s1, index1);
	strncpy(a2, s2, index2);
	strncpy(b1, s1 + index1, strlen(s1) - index1 - 1);
	strncpy(b2, s2 + index2, strlen(s2) - index2 - 1);

	int temp1 = atoi(a1) * atoi(a2) - atoi(b1) * atoi(b2);
	int temp2 = atoi(a1) * atoi(b2) + atoi(a2) * atoi(b1);

	if (temp2 >= 0) printf ("%d+%di", temp1, temp2);
	else printf ("%d%di", temp1, temp2);
}

int main(int argc, char *argv[]) {
	char *n1 = argv[1];
	char *n2 = argv[2];
	
	Ex3(n1,n2);
		
	return 0;
}
