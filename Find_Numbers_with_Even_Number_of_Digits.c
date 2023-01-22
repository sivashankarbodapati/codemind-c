#include<stdio.h>
#include<math.h>
int main()
{
    int n,nums[100];
    int len,count=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&nums[i]);
    }
    for (int i=1;i<=n;i++) {
        len=log10(nums[i])+1;
        if (len%2==0) {
            count++;
        }
    }
    printf("%d",count);
}