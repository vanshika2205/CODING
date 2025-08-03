#include<stdio.h>
void main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int target=8;
    int result=-1;

    int first=0;
    int last=9;

    while(first<=last){
        int mid=(first+last)/2;

        if(arr1[mid]==target){
            result=mid;
            
        }
            if(arr1[mid]<target){
            first=mid+1;

           }
             else{
                last=mid-1;
             }
    }
        printf("%d",result);
}