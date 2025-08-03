#include<stdio.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
     struct student s1={"shivang",1};

    printf("\n name of the student is:%s",s1.name);
    printf("\n age of the student is:%d",s1.age);
    
      return 0;
}


//can also be done by typedef output will be same 

// typedef struct student stud;
// stud s1={"shivang",1};
