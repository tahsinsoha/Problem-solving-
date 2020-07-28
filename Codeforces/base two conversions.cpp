#include<stdio.h>
int main()
{
    int t,n,i,j,k,rem,temp;
    int sum=0;
    int arr[100];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        sum=0;
        while(n!=0)
        {

          for(j=0;j<=100;j++){
              rem=n%2;
             if(rem==1) sum++;
              n=n/2;

          }

        }

        if(sum%2==0){printf("Case %d: even\n",i);}
        else printf("Case %d: odd\n",i);

    }
    return 0;
}
