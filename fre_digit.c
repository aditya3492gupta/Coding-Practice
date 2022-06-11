#include <stdio.h>
int main()
{
    int a[10];
    int n,i,rem=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        a[i]=0;
    }
    for(i=n;i>0;i/=10)
    {
        rem=i%10;
        a[rem]++;
    }
    for(i=0;i<10;i++)
    {
        if (a[i]>0)
        printf("%d present %d times\n",i,a[i]);
    }
    return 0;
}

