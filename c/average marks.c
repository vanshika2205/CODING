#include<stdio.h>
void main (){
    int subjects;
    
    printf("enter number of subjects:");
    scanf("%d",&subjects);

    int marks[subjects];

    for(int i=0;i<subjects;i++){
        printf("enter marks in subject %d:",i+1);
        scanf("%d",&marks[i]);
        
    }

    int sum = 0;

    for(int x=0;x<subjects;x++){
        sum=sum+marks[x];

    }
    int average=sum/subjects;

    printf("average marks is %d",average);

}