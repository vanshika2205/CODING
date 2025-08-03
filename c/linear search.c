#include<stdio.h>
void main (){
    int arr1[10]={12,15,27,56,78,35,44,13,39,26};
    int target=56;
    int result=-1;

    for(int i=0;i<10;i++){
        if(arr1[i]==target){
            result=i;
        }
    }
      printf("%d",result);
      
}
