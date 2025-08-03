#include<stdio.h>
#include<string.h>

struct Employee {
    char name[20];
    int employeeID;

}v1;
 
void main ()
{
    strcpy(v1.name,"shivang");
v1.employeeID=1;

struct Employee v2={"aaryan",2};

printf("%s %d\n", v1.name,v1.employeeID);
printf("%s %d\n" ,v2.name,v2.employeeID);

}