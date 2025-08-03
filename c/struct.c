#include<stdio.h>
#include<string.h>

struct Employee {
    char Name[20];
    int employeeID;
};
 void main()
 {
    struct Employee emp[100];
    strcpy(emp[0].Name,"shivang");
    emp[0].employeeID=1;

    strcpy(emp[1].Name,"aaryan");
    emp[1].employeeID=2;

     strcpy(emp[2].Name,"abhishek");
    emp[2].employeeID=3;


    printf("%s %d \n",emp[0].Name,emp[0].employeeID);
     printf("%s %d \n",emp[1].Name,emp[1].employeeID);
      printf("%s %d \n",emp[2].Name,emp[2].employeeID);

 }
