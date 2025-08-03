#include<stdio.h>
#include<string.h>
int main(){
    char string[100],temp;
    int i,j=0;
    printf("enter the string to be reversed:");
    gets(string);
    i=0;
    j=strlen(string)-1;
    while(i<j);
    {
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
        i++;
        j--;
}

   printf("\n hte reversed string is:%s",string);

   return(0);
   
}