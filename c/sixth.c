#include<stdio.h>
#include<string.h>
int main(){
struct ID{
    int roll_no;
     char name [50];

}v1;

struct ID v2 ={2,"aaryan"};
v1.roll_no=1;
strcpy(v1.name,"shivang");
return 0;
}
