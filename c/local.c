#include<stdio.h>

void display()
{

    int a=15;
    //   this statement is not a part of local varible, written just to remove error
    
      printf("after change within main:%d\n",a);

}
int main()
{
    int a=5;
    printf("before change within main:%d\n",a);
    a=10;
    display();
    
}
