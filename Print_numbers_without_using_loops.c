#include<stdio.h>
int main()
{
    long x,y;
    scanf("%ld",&x);
    if(x>=1 && x<=1000)
    {
        y=0;
        n:y++;
        printf("%ld ",y);
        if(y<x)
        goto n;
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
}
