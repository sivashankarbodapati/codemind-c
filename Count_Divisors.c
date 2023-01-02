#include<stdio.h>
int main()
{
    int a,b,k,count=0,i;
    scanf("%d%d%d",&a,&b,&k);
    for (i=a;i<=b;i++) {
        if (i%k==0) {
            count=count+1;
        }
    }
    printf("%d",count);
}