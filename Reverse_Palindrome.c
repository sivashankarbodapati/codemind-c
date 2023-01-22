#include<stdio.h>
int fun(int n)
{
    int c=0,i=n;
    while(n)
    {
        c=(c*10)+n%10;
        n/=10;
    }
    int rev=0,ans,dup;
    ans=i+c;
    dup=ans;
    while(ans)
    {
        rev=(rev*10)+ans%10;
        ans/=10;
    }
    if(dup==rev)
    {
        return rev;
    }
    else 
    {
        fun(dup);
    }
}
int main()
{
    int x,p;
    scanf("%d",&x);
    p=fun(x);
    printf("%d",p);
}