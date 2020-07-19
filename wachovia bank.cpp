#include<bits/stdc++.h>
using namespace std;
int n,maxw;
int dp[200][200];
int w[200],val[200];
int knapsack(int ind, int weight){
    if(ind==n+1) return 0;
       if(dp[ind][weight]!=-1) return dp[ind][weight];
       int profit1=0,profit2=0;
       if(weight+w[ind]<=maxw) profit1= val[ind] + knapsack(ind+1,weight+w[ind]);
         profit2 = knapsack(ind+1,weight);
         return dp[ind][weight] =max(profit1,profit2);
}
int main(){
int t;
//int w[202],val[27];
cin>>t;
for(int i=1;i<=t;i++){
    cin>>maxw>>n;
    for(int j=1;j<=n;j++)
       cin>>w[j]>>val[j];

        memset(dp,-1,sizeof(dp));
        int ans= knapsack(1,0);
        cout<<"Hey stupid robber, you can get "<<ans<<"."<<endl;
    //cout<<knapsack(1,0)<<endl;
}



return 0;
}
