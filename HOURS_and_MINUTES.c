#include<stdio.h>
int main()
{
    int n,hours,min;
    scanf("%d",&n);
    hours=n/60;
    min=n%60;
    printf("%d Hour(s) %d Minute(s)",hours,min);
}