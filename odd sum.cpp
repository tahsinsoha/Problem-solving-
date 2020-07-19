#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    int sum=0;
    scanf("%d",&n);
    for(l=1; l<=n; l++)
    {
        scanf("%d%d",&i,&j);
        sum=0;
        for(k=i; k<=j; k++)
        {
            if((k%2!=0)||k==1)
            {
                sum=sum+k;
            }
        }
        printf("Case %d: %d\n",l,sum);
    }
    return 0;
}
