#include<stdio.h>
int sum(int n);
int main(){
    int num;
    printf("enter the number till that that number:");
    scanf("%d",&num);
    printf("sum is=>%d",sum(num));
    return 0;

}
int sum(int n){
    if(n==0){
        return 0;

    } else{
        return n+sum(n-1);
    }
}