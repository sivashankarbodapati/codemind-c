#include<stdio.h>
int main()
{
    int n,sq,i,remainder,reverse=0,sq2,remainder2,reverse2=0;
    scanf("%d",&n);
    sq=n*n;
    while (n>0) {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
  sq2=reverse*reverse;
  while (sq2>0) {
        remainder2=sq2%10;
        reverse2=reverse2*10+remainder2;
        sq2/=10;
    }
    if(sq==reverse2) {
        printf("True");
    }
    else {
        printf("False");
    }
}
