#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,c=0,a,num;
    printf("Enter the number");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    a=num%10;
    int b=num/(pow(10,c-1));
    printf("The first number is %d and the last number is%d",b,a);
    return 0;
}
