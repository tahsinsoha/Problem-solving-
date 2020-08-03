#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int arr[1047];
int dp[17][17];
ll func(int i,int cnt)
{
    if(cnt==m)
        return 1;
    if(i>n)
    {
        return 0;

    }


    if(dp[i][cnt]!=-1)
        return dp[i][cnt];

    ll q=0;
    for(int j=1; j<=n; j++)
        if(i==0 or abs(arr[i]-arr[j])<=2)
            q+=func(j,cnt+1);

    return dp[i][cnt]=q;

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>m;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        cout<<"Case "<<i<<": "<<func(0,0)<<endl;

    }

    return 0;
}
