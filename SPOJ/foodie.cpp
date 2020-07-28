#include<bits/stdc++.h>
using namespace std;
int r,maxw,fr,sum,x;
int w[100],val[100];
int dp[200][200];
int knapsack(int ind, int weight){
    if(ind==r+1) return 0;
       if(dp[ind][weight]!=-1) return dp[ind][weight];
       int profit1=0,profit2=0;
       if(weight+w[ind]<=maxw) profit1=  val[ind]+knapsack(ind+1,weight+w[ind]);
         profit2 = knapsack(ind+1,weight);
         return dp[ind][weight] =max(profit1,profit2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         memset(w,-1,sizeof(w));
        memset(dp,-1,sizeof(dp));
        cin>>r>>maxw;
        sum=0;
        for(int j=1; j<=r; j++)
        {

            sum=0;
            cin>>x;
            for(int i=0; i<x; i++)
            {
                cin>>fr;
                sum=sum+fr;
            }
            w[j]=sum;
            val[j]=sum;

        }
        cout<<knapsack(1,0)<<endl;
    }
    return 0;
}
