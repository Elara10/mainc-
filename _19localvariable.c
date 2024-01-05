#include<stdio.h>
void local_var()
{
   int a=4;
   printf("Value of a %d",a);
}
int main()
{
    local_var();
}