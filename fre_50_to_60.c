#include <stdio.h>
int main()
{
    int a[200],n=0,i;
    printf("Enter the age of the people\n");
    for(i=0;i<=100;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=100;i++)
    {
        if(a[i]>50&&a[i]<60)
            n++;
    }
    printf("The number of people in the age group of 50 to 60 years are %d",n);
    return 0;
}
