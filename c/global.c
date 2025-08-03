#include<stdio.h>
int a = 5;
void display()
{
    printf("after change within main:%d\n",a);

}
int main()
{
    printf("before change within main:%d\n",a);
    a=10;
    display();
    
}
