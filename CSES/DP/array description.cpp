#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int arr[100007];
int brr[1000007];
long long ps[1000007];
int dp[100007][107];
string s,t;
int n,m;
int rec(int i, int last)
{
    if(i>n)
        return 1;
    if(dp[i][last]!=-1)
        return dp[i][last];
    int ret;
    if(arr[i])
    {
        if(last && abs(last-arr[i])>1)
            return 0;

            ret=rec(i+1,arr[i]);
    }

    else
    {
        ret = rec(i+1,last);
        if(last-1>=1)
            ret=(ret+ rec(i+1,last-1))%mod;
        if(last+1<=m)
            ret=(ret+rec(i+1,last+1))%mod;
    }

    return dp[i][last]=ret;


}
int main()
{

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        cin>>arr[i];
    memset(dp,-1,sizeof(dp));

    int ans=0;

    if(arr[1])
        ans=rec(1,0);
    else
    {
        for(int i=1; i<=m; i++)
            ans=(ans+rec(2,i))%mod;
    }
    cout<<ans<<endl;

    return 0;

}
