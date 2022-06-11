/*AMICABLE NUMBER- We take two numbers, if the sum of the factors of the first number is equal to the second number and vise versa.
EXAMPLE-220,284*/
#include <stdio.h>
int main()
{
    int n1,n2,sum1=0,sum2=0;
    printf("Enter the two numbers");
    scanf("%d%d",&n1,&n2);
    for(int i=1;i<n1;i++)
    {
        if(n1%i==0)
            sum1=sum1+i;
    }
    for(int j=1;j<n2;j++)
    {
        if(n2%j==0)
            sum2=sum2+j;
    }
    if(sum1==n2&&sum2==n1)
        printf("%d and %d are amicable numbers",n1,n2);
    else
        printf("%d and %d are not amicable numbers",n1,n2);
    return 0;
}
