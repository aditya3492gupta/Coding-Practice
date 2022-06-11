#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,x,d=1;
    float sum=1;
    printf("Enter the range");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        sum=sum-((pow(x,i))/i)*d;
        d=-d;
    }
    printf("%0.2f\n",sum);
    return 0;
}
