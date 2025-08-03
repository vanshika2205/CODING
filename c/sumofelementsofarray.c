#include<stdio.h>

int sum(int arr[],int n);

int main(){
    int array[]={56,76,45,32,98,76,99,59,21};
    int size=sizeof(array)/sizeof(array[0]);

    int result=sum(array,size);
    printf("sum of array is:%d",result);
    return 0;

}

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];

    }
    return sum ;
}
