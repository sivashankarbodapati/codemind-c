#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    scanf("%d%d",&a,&b);
    for (i=1;i<=a and i<=b;i++) {
        if (a%i==0 and b%i==0) {
            gcd=i;
        }
    }
    printf("%d",gcd);
}