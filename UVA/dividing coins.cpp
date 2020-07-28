#include<bits/stdc++.h>
using namespace std;
int s,maxw,x,sum;
int w[105],dp[105][500005],val[105];
int knapsack(int ind, int weight){
    if(ind==s+1) return 0;
       if(dp[ind][weight]!=-1) return dp[ind][weight];
       int profit1=0,profit2=0;
       if(weight+w[ind]<=maxw) profit1=  val[ind]+knapsack(ind+1,weight+w[ind]);
         profit2 = knapsack(ind+1,weight);
         return dp[ind][weight] =max(profit1,profit2);
}
int main(){
int t;
cin>>t;
while(t--){
cin>>s;
sum=0;
memset(dp,-1,sizeof(dp));
memset(w,0,sizeof(w));
for(int i=1;i<=s;i++){
    cin>>w[i];
    sum=sum+w[i];
    val[i]=w[i];
}
int jazz=sum;
 maxw=floor(double(jazz/2.0));
 //cout<<maxw;
int ans= knapsack(1,0);
int res= jazz-2*ans;
cout<<abs(res)<<endl;
}
return 0;
}
