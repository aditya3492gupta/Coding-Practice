/*ARMSTRONG NUMBER-Armstrong number definition is the number in any given number base, which forms the total of the same number, when each of its digits is raised to the power of the number of digits in the number.
PALINDROME NUMBER-A number when reversed is equal to the original number*/
#include <stdio.h>
int main()
{
    int n,i,a,arm=0,rev=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>0;)
    {
        a=i%10;
        arm=arm+ a*a*a;
        rev=rev*10+a;
        i=i/10;
    }
    if(arm==n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    if(rev==n)
        printf("Palindrome Number");
    else
        printf("Not palindrome number");
    return 0;
}
