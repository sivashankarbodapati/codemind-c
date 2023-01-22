#include<stdio.h>
int main()
{
    int n,rem,sum=0,rem2,prod=1;
    scanf("%d",&n);
    int x=n;
    while (n!=0) {
        rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    
    while (x>0) {
        rem2=x%10;
        prod=prod*rem2;
        x/=10;
    }
    int final_value=(prod-sum);
    printf("%d",final_value);
}