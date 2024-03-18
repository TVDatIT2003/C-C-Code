#include <stdio.h>
#include <math.h>
void A_input(int a[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

void A_output(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort (int a[], int size){
    for (int i = 0; i<size-1; i++){
        for (int j = i+1; j<size; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Ex01(int a[], int n){
    for (int i = 0; i<n; i++){
        int j = i + 1;
        int check = 1;
        while (j < n && check){
            if (a[i] + a[j] == n){
                check = 0;
                printf("Index at : %d %d\n", i, j);
            }
            j++;
        }
    }
}

float Ex02 (int a[], int b[], int sizeOfa, int sizeOfb){
    sort(a, sizeOfa);
    sort(b, sizeOfb);

    int i = 0, j = 0, k = 0;
    int combineSize = sizeOfa + sizeOfb;
    int combine_Array[combineSize];

    while (i + j < combineSize){
        if (a[i] < b[j]){
            if (i < sizeOfa){
                combine_Array[k] = a[i];
                k++;
                i++;
            }
            else{
                combine_Array[k] = b[j];
                j++;
                k++;
            }
        }
        else{
            if (k < sizeOfb){
                combine_Array[k] = b[j];
                j++;
                k++;
            }
            else {
                combine_Array[k] = a[i];
                k++;
                i++;
            }
        }
    }

    if (!(combineSize)%2){
        return (float)(combine_Array[(int)(combineSize)/2] + combine_Array[(int)(combineSize)/2 - 1])/2;
    }
    else return combine_Array[(int)(combineSize)/2];
}

#define SIZEa 3
#define SIZEb 4

void TwoDA_input(int a[SIZEa][SIZEb]){
    for (int i = 0; i < SIZEa; i ++){
        for (int j = 0; j < SIZEb; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void TwoDA_output(int a[SIZEa][SIZEb]){
    for (int i = 0; i < SIZEa; i++){
        for (int j = 0; j < SIZEb; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void Ex03 (int a[SIZEa][SIZEb]){
    for (int i = 0; i < SIZEb; i++){
        if (!(i%2)){
            for (int j = 0; j < SIZEa-1; j++){
                for (int k = j+1; k < SIZEa; k++){
                    if (a[j][i] < a[k][i]){
                        int temp = a[j][i];
                        a[j][i] = a[k][i];
                        a[k][i] = temp;
                    }
                }
            }
        }
        else {
            for (int j = 0; j < SIZEa-1; j++){
                for (int k = j+1; k < SIZEa; k++){
                    if (a[j][i] > a[k][i]){
                        int temp = a[j][i];
                        a[j][i] = a[k][i];
                        a[k][i] = temp;
                    }
                }
            }
        }
    }
}

#define SIZEc 4

void Ex04(int a[SIZEc][SIZEc]){
    int i1 = 0, j1 = 0;
    while (i1 < SIZEc - 1){
        int i2 = i1+1, j2 = j1+1;
        while (i2 < SIZEc){
            if (a[i1][j1] > a[i2][j2]){
                int temp = a[i1][j1];
                a[i1][j1] = a[i2][j2];
                a[i2][j2] = temp;
            }
            if (a[SIZEc - 1 - i1][j1] < a[SIZEc - 1 - i2][j2]){
                int temp = a[SIZEc - 1 - i1][j1];
                a[SIZEc - 1 - i1][j1] = a[SIZEc - 1 - i2][j2];
                a[SIZEc - 1 - i2][j2] = temp;
            }
            i2++;
            j2++;
        }
        i1++;
        j1++;
    }
}

void TwoDA_input_ex04(int a[SIZEc][SIZEc]){
    for (int i = 0; i < SIZEc; i ++){
        for (int j = 0; j < SIZEc; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void TwoDA_output_ex04(int a[SIZEc][SIZEc]){
    for (int i = 0; i < SIZEc; i++){
        for (int j = 0; j < SIZEc; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int Ex05(int a[SIZEa][SIZEb]){
    int max;
    for (int i = 0; i < SIZEa; i++){
        int temp_min = a[i][0];
        for (int j = 1; j < SIZEb; j ++){
            if (temp_min > a[i][j]){
                temp_min = a[i][j];
            }
        }
        if (!i) max = temp_min;
        else {
            if (max < temp_min) max = temp_min;
        }
    }
    return max;
}

int checkPrime(int a){
    if (a == 1) return 0;
    for (int i = 2; i <= sqrt(a); i++){
        if (!(a%i)) return 0;
    }
    return 1;
}

void Ex06(int a[], int size){
    for (int i = 0; i < size-1; i++){
        if( checkPrime(a[i]) ) {
            for (int j = i+1; j < size; j++){
                if(checkPrime(a[j])){
                    if(a[i] > a[j]){
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] =temp;
                    }
                }
            }
        }
    }
}

void Ex07(int a[], int size){
    int count1, count2, count;
    count = 0;
    for ( int i = 0; i < size; i++){
        count1 = 1; count2 = 1;
        int temp1 = a[i], temp2 = a[size - 1 - i];
        char check1 = 'T', check2 = 'T';
        for (int j = i+1; j < size; j++){
            if (temp1 < a[j] && check1 == 'T'){
                temp1 = a[j];
                count1++;
            }
            else if (temp1 > a[j]) check1 = 'F';

            if (temp2 < a[size - 1 - j] && check2 == 'T'){
                count2++;
                temp2 = a[size - 1 - j];
            }
            else if (temp2 > a[size - 1 -j])check2 = 'F';

        }
        if (count1 > count2 && count < count1){
            count = count1;
        }
        else if (count1 <= count2 && count < count2) count = count2;
    }

    printf("Largest sorted sub array is: \n");

    for (int i = 0; i < size; i++){
        count1 = 1; count2 = 1;
        int temp1 = a[i], temp2 = a[size - 1 - i];
        char check1 = 'T', check2 = 'T';
        for (int j = i+1; j < size; j++){
            if (temp1 < a[j] && check1 == 'T'){
                count1++;
                temp1 = a[j];
            }
            else if (temp1 > a[j]) check1 = 'F';

            if (temp2 < a[size - 1 - j] && check2 == 'T'){
                count2++;
                temp2 = a[size - 1 - j];
            }
            else if (temp2 > a[size - 1 -j]) check2 = 'F';
        }
        if (count1 == count){
            int temp = i;
            while (count1 > 0){
               printf("%d ", a[temp]);
               temp++;
               count1--;
            }
            printf("\n");
        }
        if (count2 == count){
            int temp = size - i - count2 ;
            while (count2 > 0){
                printf("%d ", a[temp]);
                temp++;
                count2--;
            }
        }
    }
    printf("\n");
}

void Ex08(int a[], int size){
    int max = 0;
    for (int i = 0; i < size; i++){
        if (a[i] > 0) {
            int sum = a[i];
            int check = 1;
            int j = i+1;
            while (check && j < size){
                if (a[j] > 0) sum += a[j];
                else {
                    check = 0;
                }
                j++;
            }
            if (max < sum) max = sum;
        }
    }

    printf("Positive sub array with largest sum is(are): \n");

    for (int i = 0; i < size; i++){
        if (a[i] > 0){
            int sum = a[i];
            int check = 1;
            int j = i+1;
            while (check && j < size){
                if (a[j] > 0) sum += a[j];
                else {
                    check = 0;
                }
                j++;
            }
            if (max == sum){
                int temp = i;
                while (a[temp] > 0 && temp < size){
                    printf("%d ", a[temp]);
                    temp++;
                }
                printf("\n");
            }
        }
    }
}

int main()
{
    //Ex 01
    int ex_01[SIZEa], n;
    A_input(ex_01,SIZEa);
    scanf("%d", &n);
    Ex01(ex_01, n);
    printf("\n");

    //Ex 02
    int ex_02_1[SIZEa];
    int ex_02_2[SIZEb];
    A_input(ex_02_1, SIZEa);
    A_input(ex_02_2, SIZEb);
    printf("Median of these arrays is: %f\n\n", Ex02(ex_02_1,ex_02_2,SIZEa,SIZEb));

    //Ex 03
    int ex_03[SIZEa][SIZEb];
    TwoDA_input(ex_03);
    Ex03(ex_03);
    TwoDA_output(ex_03);

    //Ex 04
    int ex_04[SIZEc][SIZEc];
    TwoDA_input_ex04(ex_04);
    Ex04(ex_04);
    printf ("After sorted\n");
    TwoDA_output_ex04(ex_04);

    //Ex 05
    int ex_05[SIZEa][SIZEb];
    TwoDA_input(ex_05);
    printf("The maximum value from all the minimum of each row is: %d", Ex05(ex_05));

    //Ex 06
    int ex_06_n;
    scanf("%d", &ex_06_n);
    int ex_06[ex_06_n];
    A_input(ex_06,ex_06_n);
    Ex06(ex_06,ex_06_n);
    printf("After sorted\n");
    A_output(ex_06,ex_06_n);

    //Ex 07
    int ex_07_n;
    scanf("%d", &ex_07_n);
    int ex_07[ex_07_n];
    A_input(ex_07,ex_07_n);
    Ex07(ex_07,ex_07_n);

    //Ex 08
    int ex_08_n;
    scanf("%d", &ex_08_n);
    int ex_08[ex_08_n];
    A_input(ex_08,ex_08_n);
    Ex08(ex_08,ex_08_n);

    return 0;
}
