#include<stdio.h>
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];

};
int main()
{
    struct myStructure s1 ={1,'A',"aJINAMOTO"};
     
    struct myStructure s2 ={2,'B',"aaryan"};
    printf("%d %c %s\n", s1.myNum ,s1.myLetter, s1.myString);
    printf("%d %c %s\n" , s2.myNum ,s2.myLetter, s2.myString);
    return 0;

}
