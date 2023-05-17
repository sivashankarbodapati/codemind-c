#include<stdio.h>
int cd(int n)
{
    if (n<0)
    {
        return 0;
    }
    if (n==0)
    {
        return 1;
    }
    return cd(n-1)+cd(n-2)+cd(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",cd(n));
}