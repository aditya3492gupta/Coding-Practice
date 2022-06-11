//MAGIC NUMBER- If the product of the sum of the digit of a number and the reverse of the sum is equal to the number then the number is magic number
//EXAMPLE-1729
#include <stdio.h>
int main()
{
    int n,a,i,rev=0,sum=0,j,b;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        a=i%10;
        sum=sum+a;
    }
    for(j=sum;j>0;j=j/10)
    {
        b=j%10;
        rev=rev*10+b;
    }
    if(sum*rev==n)
        printf("Magic Number");
    else
        printf("Not magic number");
    return 0;
}
