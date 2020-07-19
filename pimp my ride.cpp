#include<bits/stdc++.h>
using namespace std;
int done,n;
long long a[20][20];
long long dp[16388];
bool vis[16388];
long long rec(int mask)
{
    if(mask==done)
        return 0;
    if(vis[mask] )
        return dp[mask];

    long long ans = 1e18;;
    for(int i=0; i<n; i++)
    {

        if(mask & (1<<i))
            continue;
        long long tot =0;

        for(int j=0;j<n;j++)
        {
            if( mask & (1<<j))

                  tot = tot+ a[i][j];


        }
        ans = min(ans, tot+a[i][i]+rec(mask | (1<<i) ));


    }
    vis[mask ]=1;
    return dp[mask] = ans;

}
int main()
{
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++)
    {
        cin>>n;
        done = (1<<n)-1;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>a[i][j];

        printf("Case %d: %lld\n",t,rec(0));
        memset(vis,0,sizeof(vis));

    }
    return 0;
}
