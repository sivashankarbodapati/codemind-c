#include<stdio.h>
int main()
{
    int n,i,p=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        p+=i;
    }
    printf("%d",p);
}