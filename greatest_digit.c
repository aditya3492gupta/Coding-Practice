#include <stdio.h>
int main()
{
    int n,i,a,b=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        a=i%10;
        if(a>b)
            b=a;
    }
   printf("The greatest digit is %d",b);

    return 0;
}
