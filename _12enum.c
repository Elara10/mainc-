#include<stdio.h>
enum week{Mon,Tue,Wed,Thurs,Fri,Sat,Sun};
int main()
{
    enum week day;
    day=Tue;
    printf("%d",day);
    return 0;
}