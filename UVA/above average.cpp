#include<stdio.h>
int main()
{
    int t,i,j,k;
    double final,avg,sum,n,cnt;
    int numb[1000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%lf",&n);
        sum=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&numb[j]);
            sum=sum+numb[j];


        }
        avg= sum/n;
        cnt=0;
        for(k=0; k<n; k++)
        {
            if(numb[k]>avg)
            {
                cnt++;
            }


        }


        final=cnt/n*100;
        printf("%.3lf%%\n",final);

    }
    return 0;
}
