#include<bits/stdc++.h>
using namespace std;
long long dp[55][55];
bool vis[55][55];
long long arr[55][55];
long long ncr(long long n, long long r)
{
    if(n==r || r==0)
        return 1;
    if(r==1)
        return n;
    if(vis[n][r])
        return dp[n][r];
    dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    vis[n][r]=1;
    return dp[n][r];

}
long long solve(long long n)
{
    long long res=0;
    for(int i=n; i>=1; i--)
        res+=ncr(n,i);
    return res;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    long long r,c;
    cin>>r>>c;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>arr[i][j];
    long long ans =0;
    for(int i=0; i<r; i++)
    {
        long long zero=0, one =0;
        for(int j=0; j<c; j++)
        {
            if(arr[i][j])
                one++;
            else
                zero++;
        }
        ans += solve(zero)+ solve(one);
    }
    for(int i=0; i<c; i++)
    {
        long long zero=0, one =0;
        for(int j=0; j<r; j++)
        {
            if(arr[j][i])
                one++;
            else
                zero++;
        }
        ans += solve(zero)+ solve(one);
    }
    cout<<ans-r*c<<endl;
        return 0;
}
