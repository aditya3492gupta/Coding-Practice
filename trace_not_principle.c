#include <stdio.h>
int main()
{
    int a[10][10],i,j,sum=0,n;
    printf("Enter the order\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
                sum=sum+a[i][j];
        }
    }
    printf("Trace of non principle diagonal is %d ",sum);
    return 0;
}
