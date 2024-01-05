#include<stdio.h>
int a=45;
void function1()
{
    printf("Function 1:%d\n",a);
}
void function2()
{
      printf("Function 2:%d",a);
}
int main()
{
    function1();
    function2();
}