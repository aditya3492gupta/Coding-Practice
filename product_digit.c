#include <stdio.h>
int main()
{
    int n,a,i,pro=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        a=i%10;
        pro=pro*a;
    }
    printf("The product of the digit of %d is %d",n,pro);
    return 0;
}
