#include<stdio.h>

union test1 {
    int x;
    int y;
} test1;

union test2{
    int x;
    char y;

} test2;

union test3{
    char arr[10];
    char y;

}test3;

int main(){

    int size1=sizeof(test1);
     int size2=sizeof(test2);
      int size3=sizeof(test3);

      printf("sizeof test1:%d\n " ,size1);
       printf("sizeof test2:%d\n " ,size2);
        printf("sizeof test3:%d\n " ,size3);

}