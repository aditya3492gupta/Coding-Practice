#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,a,j,c=0,dec,sum=0;
    printf("Enter a binary number");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        a=i%10;
        c++;
        for(j=0;j<c;j++)
        {
            dec=a*pow(2,j);
        }
        sum=sum+dec;
    }
    printf("The decimal form of %d is %d",n,sum);
    return 0;
}
