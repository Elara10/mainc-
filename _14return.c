#include<stdio.h>
int sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}
int main()
{
    int x=3;
    int y=5;
    printf("Sum:%d",sum(x,y));
    return 0;
}