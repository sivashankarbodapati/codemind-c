#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    scanf("%d",&n);
    while(n)
    {
        if(n%10==0)
             a++;
        else if(n%10==1)
             b++;
          else if(n%10==2)
             c++;
          else if(n%10==3)
              d++;
            else if(n%10==4)
             e++;
          else if(n%10==5)
             f++;
          else if(n%10==6)
             g++;
          else if(n%10==7)
             h++;
          else if(n%10==8)
             i++;
          else if(n%10==9)
             j++;
             n/=10;
         }
    if(a>1 || b>1 || c>1 || d>1 || e>1 || f>1 || g>1 || h>1 || i>1 || j>1)
         {
        printf("Not Unique Number");
         }
        else
        {
         printf("Unique Number");   
        }
}