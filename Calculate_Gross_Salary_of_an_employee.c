#include<stdio.h>
int main()
{
    float bs,hra,da;
    float pf,gross;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*0.12;
    gross=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gross);
}