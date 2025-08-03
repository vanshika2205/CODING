#include<stdio.h>
void main(){
    int num;
    printf("enter a number to exclude b/w 1 to 10:");
    scanf("%d\n",&num);

    for(int i=1;i<=10;i++){

        if(i==num){
            continue;
        }
          printf("%d\n",i);
    }
}