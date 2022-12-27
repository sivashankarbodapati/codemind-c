#include<stdio.h>
int main()
{
    int a=0,b=1,i,n,NextTerm;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for (i=2;i<n;i++){
        NextTerm=a+b;
        a=b;
        b=NextTerm;
        printf("%d ",NextTerm);
    }
}
