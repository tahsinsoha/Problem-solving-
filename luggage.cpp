#include<bits/stdc++.h>
using namespace std;
int w[25],val[25];
int dp[25][210];
int n,maxw;
int knapsack(int ind, int weight)
{
    if(ind==n+1)
        return 0;
    if(dp[ind][weight]!=-1)
        return dp[ind][weight];
    int profit1=0,profit2=0;
    if(weight+w[ind]<=maxw)
        profit1=  val[ind]+knapsack(ind+1,weight+w[ind]);
    profit2 = knapsack(ind+1,weight);
    return dp[ind][weight] =max(profit1,profit2);
}
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string s;
        stringstream ss;
        getline(cin,s);
        //cin>>s;
        ss<<s;
       int sum=0,cont=0;
        int p;
        while(ss>>p)
        {
            cont++;
            w[cont]=p;
            val[cont]=p;
            sum=sum+p;
        }
        n=cont;
        maxw=sum;

        if(sum &1)
        {
            printf("NO\n");

        }
        else
        {    maxw/=2;
            int ans= knapsack(1,0);
           // cout<<maxw<<endl;
            //cout<<ans<<endl;
            if(ans==maxw)
                 printf("YES\n");
            else
                printf("NO\n");
        }
         memset(dp,-1,sizeof(dp));
        memset(w,0,sizeof(w));

    }
    return 0;
}
