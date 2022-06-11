//HAPPY NUMBER-A number is said to be happy if it yields 1 when replaced by the sum of squares of its digits repeatedly. If this process results in an endless cycle of numbers containing 4, then the number will be an unhappy number.
#include <stdio.h>
int main()
{
    int n,a,i,b,sum;
    printf("Enter a number");
    scanf("%d",&n);
    while(sum!=1&&sum!=4)
    {
        sum=0;
    for(i=n;i>0;i/=10)
    {
        a=i%10;
        sum=sum +a*a;
    }
    n=sum;
    }
    if(sum==1)
        printf("Happy number");
    else
        printf("Not happy number");
    return 0;
}
