#include<stdio.h>
int main()
{
    int n,i,cmp,j,k;
    int h[100];
    int ans=0;
    int sum=0;
    for(k=1;; k++)
    {
        scanf("%d",&n);
        sum=0;
        ans=0;
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&h[i]);
            sum=sum+h[i];
        }
        cmp=sum/n;
        for(j=0; j<n; j++)
        {
            if((h[j]<cmp)||(h[j]==cmp))
            {
                continue;
            }
            else
            {
                ans=ans+(h[j]-cmp);
            }

        }
        printf("Set #%d\n",k);
        printf("The minimum number of moves is %d.\n\n",ans);
    }

    return 0;
}
