#include<stdio.h>
int main()
{
    int n,odd=0,even=0;
    scanf("%d",&n);
    while(n) {
        if (n%2!=0)
            odd++;
        else
            even++;
            n/=10;
    }
    if (even>1 && odd==0) 
    printf("Even");
    else if (odd>1 && even==0) 
    printf("Odd");
    else 
    printf("Mixed");
}
