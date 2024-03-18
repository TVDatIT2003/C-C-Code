#include <stdio.h>

int main()
{
    char operator;
    int num1, num2;
    printf("Enter 2 intergers and operator:\n");
    scanf("%d%c%d",&num1,&operator,&num2);
    switch (operator)
    {
    case  ('+'):
        printf("%d+%d=%d",num1,num2,num1+num2);
        break;
    case  ('-'):
        printf("%d-%d=%d",num1,num2,num1-num2);
        break;
    case  ('*'):
        printf("%d*%d=%d",num1,num2,num1*num2);
        break;
    case  ('/'):
        printf("%d/%d=%d",num1,num2,num1/num2);
        break;
    }
}