#include <stdio.h>
int main()
{
    int n,a,rem=0,place=1,i;
    printf("Enter a decimal number");
    scanf("%d",&n);
    for(i=n;i>0;i/=2)
    {
        a=i%2;
        rem=rem+(a*place);
        place=place*10;
    }
    printf("The binary form of %d is %d",n,rem);
    return 0;
}

