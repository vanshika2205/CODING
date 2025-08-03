#include<stdio.h>
void main(){
    int attendence;
    printf("enter your attendence percentage \n");
    scanf("%d", &attendence);
    attendence>75?printf("safe"):printf("danger");
}