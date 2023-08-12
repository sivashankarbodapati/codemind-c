#include<stdio.h>
#include<math.h>
int main()
{
    int hour,minute;
    float angle;
    scanf("%d:%d",&hour,&minute);
    int time = hour *60 + minute;
    angle = fabs(0.5*(60*hour-11*minute));
    angle = fmin(angle,360 - angle);
    printf("%.1f",angle);
    return 0;
}