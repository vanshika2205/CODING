#include<stdio.h>
int main (){
    FILE*fptr;

    fptr=fopen("filename.txt","r");
    char mystring[100];
    if(fptr==NULL){
        printf("not able to open the file");
    
    
    }else{
     
    while(fgets(mystring,100,fptr)){
        printf("%s",mystring);
    }

    fclose(fptr);
    return 0;
}
