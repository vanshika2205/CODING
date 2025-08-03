#include<stdio.h>

int maximum(int arr[],int n);

int main(){
    int array[]={56,76,45,32,98,76,99,59,21};
    int size=sizeof(array)/sizeof(array[0]);

    int result=maximum(array,size);
    printf("maximum number is:%d",result);

    return 0;

}
int maximum(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
       return max;
}