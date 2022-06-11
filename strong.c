//SRTONG NUMBER- Number whose sum of factorial of each digit is equal to the number itself is a strong number
#include <stdio.h>
int main()
{
    int n,fact,a,i,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {
        a=i%10;
        fact=1;
        for(int j=1;j<=a;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }

    if(sum==n)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}
