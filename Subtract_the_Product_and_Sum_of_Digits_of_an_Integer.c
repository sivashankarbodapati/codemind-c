#include<stdio.h>
int main()
{
    int n,rem,sum=0,prod=1,x,rem2;
    scanf("%d",&n);
    x=n;
    while (n>0) {
        rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    
    while (x>0) {
        rem2=x%10;
        prod=prod*rem2;
        x/=10;
    }
    printf("%d",prod-sum);
}
