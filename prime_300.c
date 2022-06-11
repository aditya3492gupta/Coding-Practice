#include <stdio.h>
int main()
{
        int i,j,c;
        for(i=1;i<=300;i++)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    c++;
            }
            if(c==2)
                printf("%d\n",i);
        }
        return 0;
}
