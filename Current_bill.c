#include<stdio.h>
int main()
{
    int unit;
    float chg,sur,gr_amt,elec_bill;
    scanf("%d",&unit);
    if(unit<200)
    {
        chg=1.20;
    }
    else if(unit>=200 && unit<400)
    {
        chg=1.50;
    }
    else if(unit>=400 && unit<600)
    {
        chg=1.80;
    }
    else
    {
        chg=2.00;
    }
    gr_amt=unit*chg;
    if(gr_amt>400)
    {
        sur=gr_amt*15/100.0;
    }
    elec_bill=gr_amt+sur;
    if(elec_bill<=400.0)
    {
        elec_bill+=100.0;
    }
    printf("%.2f",elec_bill);
}