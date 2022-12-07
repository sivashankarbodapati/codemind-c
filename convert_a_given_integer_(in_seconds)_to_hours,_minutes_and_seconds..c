#include<stdio.h>
int main()
{
    int num,h,m,s;
    scanf("%d",&num);
    h=num/3600;
    m=(num%3600)/60;
    s=(num%3600)%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}