#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,c=0,a;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        a=i%10;
        c++;
    }
    int f=n/pow(10,c-1);
    int sl=(n%100)/10;
   int sum=f+sl;
   printf("The sum of first and second last digit of %d is %d",n,sum);
   if(sum%2==0)
    printf("\n%d",sum*2);
   else
    printf("\n%d",sum*5);
   return 0;
}
