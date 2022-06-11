#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,c[10][10],n,k;
    printf("Enter the order of the matrix\n");
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
            b[j][i]=a[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\n",c[i][j]);
        }
    }
    return 0;
}
