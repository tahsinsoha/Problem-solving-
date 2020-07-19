#include<stdio.h>
int main()
{
    unsigned long long x,y,n,i,b=0;
    while(1)
    {
        scanf("%llu",&n);

        if(n==0)
        {
            break;
        }
        b=0;
        for(y=1; y<=150; y++)
        {
            for(x=(y+1); x<=150; x++)
            {
                if(((x*x*x)-(y*y*y))==n)
                {
                    printf("%llu %llu\n",x,y);
                    b=1;
                    break;
                }


            }
            if(b==1)
            {
                break;
            }
        }
        if(b==0 )
            printf("No solution\n");

    }

    return 0;
}
