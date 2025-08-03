#include<stdio.h>
int increment(int*,int*);

int main(){
    int x=10;
    int y=20;
    printf("x and y original values:%d %d \n",x,y);
    return 0;
    }

    int increment(int*a,int*b){
        *a=*a+1;
        *b=*b+1;
        printf("a and b in function:%d %d \n",*a,*b);

    }