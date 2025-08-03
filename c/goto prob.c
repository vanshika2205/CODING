#include<stdio.h>
void main()
{
    for(int i=2;i<=50;i++){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                break;
            }
            else if(j==i/2){
                printf("%d\n",i);
            }
        }
    }

}