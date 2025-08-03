#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;

}

int main(){
int a=10;
int b=20;
printf("values before swap:%d %d\n",a,b);
swap(&a,&b);
printf("values after swap:%d %d\n",a,b);

return 0;
}

