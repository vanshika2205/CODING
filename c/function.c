#include<stdio.h>

int sum(int a,int b);
int main(){

    int x=50;
    int y=80;

    int result=sum(100,60);
    printf("result is : %d", result);

    return 0;
}
int sum(int a,int b){
    int add;
    add=a+b;
    return add;

}