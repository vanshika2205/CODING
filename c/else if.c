#include<stdio.h>
int main(){
    int age=9;
    if (age>60){
        printf("you are old");
    } 

    else if (age>18){
        printf("you are adult");
    }
    else{
        printf("you are child");
    }
    return 0;
}