#include<bits/stdc++.h>
using namespace std;
int arr[1007];
int dp[1007][2];
int vis[1007][2];
int n,p;
int rec(int i,bool one)
{
    if(i>n)
        return 0;
    if(vis[i][one]==p)
        return dp[i][one];
    int q1;
    if(i==n && one)
        q1=0;
    else
    {
        int temp = one;
        if(i==1)
            temp = 1;
        q1 = arr[i]+rec(i+2,temp);
    }
    int q2 = rec(i+1,one);
    vis[i][one]=p;
    return dp[i][one] = max(q1,q2);
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        p++;
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        printf("Case %d: %d\n",i,rec(1,0));
    }

    return 0;
}
