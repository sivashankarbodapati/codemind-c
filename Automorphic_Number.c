#include<stdio.h>
int main()
{
    int n,sq,i;
    scanf("%d",&n);
    sq=n*n;
    if ((n==sq%10) or (n==sq%100) or (n==sq%1000)) {
        printf("Automorphic Number");
    }
    else {
        printf("Not an Automorphic Number");
    }
}