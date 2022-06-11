#include <stdio.h>
int main()
{
    int n,i,a,rev1=0,rev2=0,sq;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n*n;i>0;i/=10)
    {
        a=i%10;
        rev1=rev1*10+a;
    }
    for(i=n;i>0;i/=10)
    {
        a=i%10;
        rev2=rev2*10+a;
    }
    sq=rev2*rev2;
    if(rev1==sq)
        printf("Rule follows");
    else
        printf("Rule is not followed");
    return 0;
}
