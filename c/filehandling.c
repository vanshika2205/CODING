#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("filename.txt","w");
    fprintf(fptr, "hello world!");

    fclose(fptr);
    return 0;
}