#include<bits/stdc++.h>
# define m 1000000007
using namespace std;
int arr[2000007];
long long cs[1000007];
long long ps[1000007];
int dp[1000007];
int n,x;
int ret(int sum)
{
    if(sum==0)
        return 1;

    if(dp[sum]!=-1)
        return dp[sum];

    int ans=0;

    for(int i=1; i<=n; i++)
        if(sum-arr[i]>=0)
            ans=(ans+ret(sum-arr[i]))%m;

    return dp[sum]=ans;
}
int main()
{

    cin>>n>>x;

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    memset(dp,-1,sizeof(dp));
    int p = ret(x);
    cout<<p<<endl;



    return 0;

}



