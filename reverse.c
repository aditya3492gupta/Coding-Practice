#include <stdio.h>
int main()
{
    int n,a,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        a=i%10;
        rev=rev*10+a;
    }
    printf("The reverse of %d is %d",n,rev);
    return 0;
}
