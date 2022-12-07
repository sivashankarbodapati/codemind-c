#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float area=(a+b)*0.5*h;
    printf("%.4f",area);
}