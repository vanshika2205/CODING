#include<stdio.h>
int main(){
    int i=5;
    int*ptr;
    int**d_ptr;

    ptr=&i;
    d_ptr=&ptr;

    printf("%d\n",i);
    printf("%u\n",*ptr);
    printf("%u\n",**d_ptr);

    return 0;
}