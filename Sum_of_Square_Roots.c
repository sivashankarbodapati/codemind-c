#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m;
    float sum=0;
    scanf("%d%d",&n,&m);
    for (i=n;i<=m;i++) {
        sum=sum+(sqrt(i));
    }
    printf("%.2f",sum);
}