#include<stdio.h>  
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==2)
        {
            continue;
        }
        if(i==6)
        {
            break;
        }
        printf("%d  ",i);
    }
    return 0;
}












//break 29/12/23
#include<stdio.h>
int main()
{
    int i=0,j=0;
    for(int  i=0;i<5;i++)
    {
        printf("i= %d ,j=",i);
        for(int j=0;j<5;j++)
        {
            if(j==2)
            break;
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}



//contiue
#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    for(int i=0;i<5;i++)
    {
        printf("i=%d,j=",i);
        for(int j=0;j<5;j++)
        {
            if(j==2)
            continue;
           printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}