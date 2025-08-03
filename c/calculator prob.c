#include<stdio.h>
int main()
{
    char choice;
    int x,y;
    int result;

    printf("enter the two numbers:");
    scanf("%d %d",&x,&y);

    printf("enter the operator (+,-,*,/)\n");
    scanf("%c",&choice);

    switch (choice){
        case'+':
        result='x+y';
        break;

        case'-':
        result='x-y';
         break;

        case'*':
        result='x*y';
        break;

        case'/':
        result='x/y';
        break;

        default:
        printf("invalid operator input\n");

    }
    printf("result is %d",result);
    return 0;
}