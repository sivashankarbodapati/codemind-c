#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[100];
	int sum=0,sum2=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		scanf("%d",&arr[i]);
	}
	
	for (int i=1;i<=n;i++) 
	{
		if (i%2==0 && i+2%2==0) {
			sum=sum+arr[i];
		}
		else {
			sum2=sum2+arr[i];
		}
	}
	int x=abs(sum-sum2);
	if (x%4==0) {
		printf("X");
	}
	else {
		printf("Y");
	}
}
