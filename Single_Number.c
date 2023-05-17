#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r=a[0];
    for(int i=1;i<n;i++)
    {
        r=r^a[i];
    }
    printf("%d",r);
}