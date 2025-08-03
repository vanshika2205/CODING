#include<stdio.h>

int Factorial(int n);
int main(){
    int num;
    printf("enter the number to get the factorial:");
    scanf("%d",&num);
    printf("the factorial is %d",Factorial(num));
    return 0;

}

int factorial(int n){
    if(n==1){
        return 1;
    } else{
        return n*factorial(n-1);
    }
}
