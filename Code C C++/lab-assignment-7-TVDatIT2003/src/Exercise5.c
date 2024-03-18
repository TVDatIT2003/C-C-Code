/*
5. Consider a T9 phone keypad layout (i.e. numeric key 2 is also used to input a, b or c),
1 and 0 are considered empty characters. Write a program to input a series of keypads pressed
then output the possible combinations of letters.
Ex:
 ______________________________________
| Input: 36                            |
| Output: dm dn do em en eo fm fn fo   |
|______________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

char *number[10];
char result[SIZE];

void reEx5(char s[], int hold) {
	if (strlen(s) == 1 && (s[0] == '1' || s[1] == '0')) {
		for (int j = 0; j < strlen(result); j++){
				printf("%c", result[j]);
		}
		printf(" ");
	}
	
	if (s[0] == '1' || s[0] == '0'){
		if (strlen(s + 1) > 0) reEx5(s + 1, hold);
	}

	char *temp = number[s[0] - '0'];
	for (int i = 0; i < strlen(temp); i++){
		result[hold] = temp[i];
		if (strlen(s + 1) > 0) reEx5(s + 1, hold + 1);
		else {
			for (int j = 0; j < strlen(result); j++){
				printf("%c", result[j]);
			}
			printf(" ");
		}
	}
}

void Ex5(char s[]){
	//your codes here
	number[0]= "";
	number[1]= "";
	number[2]= "abc";
	number[3]= "def";
	number[4]= "ghi";
	number[5]= "jkl";
	number[6]= "mno";
	number[7]= "pqrs";
	number[8]= "tuv";
	number[9]= "wxyz";
	reEx5(s,0);
}

int main(int argc, char *argv[]) {
	char *s = argv[1];
    Ex5(s);
	return 0;
}
