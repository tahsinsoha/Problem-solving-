#include<bits/stdc++.h>
using namespace std;
int m,done;
int arr[20][20], h[20];
long long dp[32800];
int vis[32800];
long long  rec(int mask)
{
    if(mask==done)
        return 0;
    if(vis[mask] )
        return dp[mask];

    long long  ans =1e8;

    for(int j=0; j<m; j++)
    {
        if(mask & (1<<j))
            continue;
        int mx = 1;
        for(int i=0; i<m; i++)
        {
            if(!(mask & (1<<i)))
                continue;
            mx = max(mx,arr[i][j]);
        }

    long long shot = (h[j]+mx-1)/mx;
    long long  q = shot+ rec(mask | (1<<j));
    ans = min (ans,q);
    }
    vis[mask]=1;
    return dp[mask]=ans;

}
int main()
{
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++)
    {
        cin>>m;
        done = (1<<m)-1;

        for(int i=0; i<m; i++)
            cin>>h[i];

        for(int i=0; i<m; i++)
            for(int j=0; j<m; j++)
            {
                char c;
                cin>>c;
                arr[i][j] = c-'0';

            }

        printf("Case %d: %d\n",t,rec(0));
        memset(vis,0,sizeof(vis));

    }
    return 0;
}
