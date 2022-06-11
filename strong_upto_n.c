//SRTONG NUMBER- Number whose sum of factorial of each digit is equal to the number itself is a strong number
#include <stdio.h>
int main()
{
    int n,i,fact,sum,a,j,k;
    printf("Enter the range");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum=0;
       for(j=i;j>0;j/=10)
       {
           a=j%10;
           fact=1;
           for(k=1;k<=a;k++)
           {
               fact=fact*k;
           }
           sum=sum+fact;
       }
       if (sum==i)
        printf("%d\n",i);
   }
   return 0;
}
