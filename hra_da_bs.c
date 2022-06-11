#include <stdio.h>
int main()
{
    int bs;
    float da,hra,pf;
    printf("Enter the basic salary");
    scanf("%d",&bs);
    printf("Enter the percentage of the DA\t");
    scanf("%f",&da);
    printf("Enter the percentage of the HRA\t");
    scanf("%f",&hra);
    printf("Enter the percentage of the PF\t");
    scanf("%f",&pf);
    da=0.01*da*bs;
    hra=0.01*hra*bs;
    float gs=bs+hra+da;
    pf=0.01*pf*gs;
    float ns=gs-pf;
    printf("The Net Salary of the employee is %0.2f",ns);
    return 0;
}
