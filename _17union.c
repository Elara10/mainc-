#include<stdio.h>
union student{
    int age;
    int  marks;
} s;
int main()
{
    s.age=12;
    s.marks=34;
    printf("age=%d",s.age);
    printf("\nmarks=%d",s.marks);
}