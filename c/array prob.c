#include<stdio.h>
int main(){

    int subjects;
    printf("enter the number of subjects:");
    scanf("%d",&subjects);

    int marks[subjects];
    for(int i=0;i<subjects;i++){
    printf("enter marks in subject %d:",i+1);
    scanf("%d",&marks[i]);
    
}

int max;
max=marks[0];

for(int j=0;j<subjects;j++){
    if(max<marks[j]){
        max=marks[j];
    }
}
printf("maximum marks is:%d",max);

return 0;
}