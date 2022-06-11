#include <stdio.h>
int main()
{
    int a[10][10],n,i,j;
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
            if(j>i)
                a[i][j]=0;
            printf("%d\t",a[i][j]);
        }
    }

    return 0;
}
