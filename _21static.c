#include<stdio.h>
void function()
{
    int x=5;
    static int y=7;
    x=x+10;
    y=y+10;
    printf("\tLocal: %d\n\tStatic: %d\n",x,y);
}
int main()
{
    printf("First Call\n");
    function();
    printf("Second Call\n");
    function();
    printf("Third Call\n");
    function();

}