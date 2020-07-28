#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[200007];
ll dp[35][35];

ll f(ll i,ll j)
{
    if(j==0)
        return 1;
    if(i==j)
        return 1;
    if(j==1)
        return i;

    if(dp[i][j]!=-1)
        return dp[i][j];

    return dp[i][j] = f(i-1, j)+f(i-1, j-1);
}

int main()
{
    ll n,m,t;
    cin>>n>>m>>t;
    ll ans=0;
    memset(dp,-1,sizeof(dp));
    for(int i=4; i<=n; i++)
    {

        for(int j=1; j<=m; j++)
        {
            if(i+j==t)
                ans+= f(n,i)*f(m,j);
        }


    }
    cout<<ans<<endl;
    return 0;
}











