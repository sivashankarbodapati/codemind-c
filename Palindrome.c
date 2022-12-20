#include<stdio.h>
int main()
{
	int i,N,r=0,rem;
	scanf("%d",&N);
	int tp=N;
	while(N!=0)
	{
		rem=N%10;
		N=N/10;
		r=r*10+rem;
	}
	if(r==tp)
	printf("True");
	else
	printf("False");
}