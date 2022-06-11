#include <stdio.h>
int main()
{
    int a[1000],b[1000],c[1000],n,i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("The elements of first array are:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("The elements of the second elements are:\n");
  for(i=0;i<n;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   {
       c[i]=a[i]+b[i];
   }
   printf("The sum of the corresponding elements are:");
   for(i=0;i<n;i++)
   {
      printf("\n%d",c[i]);
   }
   return 0;
}
