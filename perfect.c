//PERFECT NUMBER-A number whose sum of the factor is equal to the number
#include <stdio.h>
int main()
{
    int n,c,i,j,sum=0,s=0;
    printf("Enter a number");
    scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            sum=sum+j;
        }



    if(sum==n)
        printf("Perfect number");
    else
        printf("not perfect number");
    return 0;


}
