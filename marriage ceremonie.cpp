#include<bits/stdc++.h>
using namespace std;
int n;
int all;
int arr[17][17];
int vis[65700];
int dp[65700];
int rec (int mask)
{
    if(mask==all)
        return 0;
    int i = __builtin_popcount(mask);
    if(vis[mask])
        return dp[mask];
    int res= INT_MIN;
    for(int j=0; j<n; j++)
    {
        if(!(mask & (1<<j)))
        {
            res  =max(res, arr[i][j]+rec(mask | (1<<j)));
        }
    }
    vis[mask]=1;
    return dp[mask] = res;
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        all = (1<<n)-1;
        int res = rec(0);

        printf("Case %d: %d\n",i,res);
        memset(vis,0,sizeof(vis));


    }

    return 0;
}
