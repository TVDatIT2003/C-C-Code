#include <stdio.h>
#include <string.h>

void check(char str1[1000], char str2[1000]){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int t;
	for (int i = 0; i <= len2 - len1; i++){
		if (str1[0] == str2[i]){
			int pos = i+1;
			t= 1;
			for(int j = 1; j< len1; j++){
				if(str1[j] != str2[pos]){
				t = 0;
				break;
				}
				else pos++;
			}
			if (t == 1) {
				printf("str1 is contained in str2.\n");
				break;
			}
		}
	}
	if (t==0) printf("str1 is not contained in str2.\n");
}

int main(){
	char str1[1000], str2[1000];
	printf("Input str1: ");
	gets(str1);
	printf("Input str2: ");
	gets(str2);
	check(str1, str2);
	return 0;
}