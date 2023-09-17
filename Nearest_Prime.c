#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,max,min,k,t;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
    for(i=n;;i++)
    {
    	int c=0;
    	for(j=1;j<=i;j++)
    	{
        	if(i%j==0)
        	{
            	c++;
        	}
        }
    	if(c==2)
    	{
        	max=i;
        	break;
    	}
	}
	for(int a=n;;a--)
	{
    	int co=0;
    	for(int b=1;b<=a;b++)
    	{
        	if(a%b==0)
        	{	
            	co++;
        	}	
    	}
    	if(co==2)
    	{
        	min=a;
        	break;
    	}
	}
	if(abs(n-min)>abs(n-max))
	{
    	printf("%d
",max);
	}
	else if(abs(n-min)<abs(n-max))
	{
    	printf("%d
",min);
	}
	else
	{
    	printf("%d
",min);
	}
    }
}