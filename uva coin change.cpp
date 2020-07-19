#include<bits/stdc++.h>
using namespace std;
int target;
int n=5;
int dp[10][7500];
int coin[]= {0,50,25,10,5,1};
int cc(int index,int amount)
{
    if(index==n+1)
        return 0;
    if(amount==target)
        return 1;
    if(dp[index][amount]!=-1)
        return dp[index][amount];
    int taken=0,nottaken=0;
    if(coin[index]<=target-amount)
        taken=cc(index,amount+coin[index]);
    nottaken=cc(index+1,amount);
    int ans =taken+nottaken;
    dp[index][amount]= ans;
    return ans;

}
int main()
{
     //coin[6]= {0,50,25,10,5,1};
   while( cin>>target){
    memset(dp,-1,sizeof(dp));
    cout<<cc(1,0)<<endl;
   }
    return 0;
}


