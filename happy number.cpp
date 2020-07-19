#include<bits/stdc++.h>
using namespace std;
bool h(long long x)
{
    long long sum=0;

    while(x!=0)
    {

        sum=sum+((x%10)*(x%10));
        x=x/10;
//h(sum);
    }
       if(sum == 1) return true;
   else if(sum< 10) return false;
   else return h(sum);
}
int main()
{
    int t;
//long long n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        long long n;
        scanf("%lld",&n);
        long long now=n;
        if(n<10)
            n=n*10;

         if(h(n)==1)
        {
            printf("Case #%d: %lld is a Happy number.\n",i,now);
        }
        else
        {
            printf("Case #%d: %lld is an Unhappy number.\n",i,now);
        }


    }
    return 0;
}
