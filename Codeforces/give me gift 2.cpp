#include<stdio.h>
int main()
{
    int n,arrysize,evnnmb,i,j;
    int sum=0;
    int flag=0;
    int array[55];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&arrysize,&evnnmb);
        sum=0;
        for(j=0; j<arrysize; j++)
        {
            scanf("%d",&array[j]);

            if((array[j])%2==0)
            {
                sum=sum+1;
            }
        }
                 if ((sum==arrysize)&&(evnnmb==0)){

        flag=0;
    }


       else if ((sum>=evnnmb)||(evnnmb==0&&sum==0))
        {
            flag=1;

        }

    else
    {
        flag=0;
    }

    if(flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
