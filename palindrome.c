//A number when reversed is equal to the original number
#include <stdio.h>
int main()
{
    int n,rev=0,a,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {
        a=i%10;
        rev=rev*10+a;

    }

    if(rev==n)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
