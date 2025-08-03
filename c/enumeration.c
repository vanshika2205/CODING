#include<stdio.h>

enum week {sun,mon,tues,wed,thurs,fri,sat};

int main()
{
    enum week day;
    day=wed;
    printf("%d",day);
    return 0;
}