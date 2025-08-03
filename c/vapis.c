#include<stdio.h>
int main()
{
      int var = 10;

    int*ptr;
    ptr= &var;

    printf("value at ptr=%p \n", ptr);
    printf("value at var=%d \n", var);
    printf("value at *ptr=%d \n", *ptr);

}
