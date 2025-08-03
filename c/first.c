#include<stdio.h>
int main(){
    int i=5;
    char*ptr;

    ptr=&i;
    printf("%u\n",ptr);
    ptr=ptr+1;

    printf("%d\n",i);
    printf("%u\n",ptr);
    return 0 ;
}