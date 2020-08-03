#include<bits/stdc++.h>
using namespace std;
int n,p;
int arr[1047];
int dp[1047][2];
int func(int i,bool m)
{
    if(i>n)
        return 0;
    if(i==n && m)
        return 0;
    if(dp[i][m]!=-1)
        return dp[i][m];
    int x = 0, y = 0;
    y = func(i+1,m);
    if(i==1)
    {
        m=1;
    }
    x = arr[i]+func(i+2,m);


    dp[i][m]= max(x,y);
    return dp[i][m];
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        cout<<"Case "<<i<<": "<<func(1,0)<<endl;

    }

    return 0;
}
