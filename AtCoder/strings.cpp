#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[3007];
long long cs[1000007];
long long ps[1000007];
int dp[3007][3007];
int n,m;
string s,t;
int rec(int i, int j)
{
    if(i==n || j==m)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    int ret1=INT_MIN, ret2 = INT_MIN,ret3=INT_MIN;

    if(s[i]==t[j])
    {
        ret3=1+rec(i+1,j+1);
        return dp[i][j]=ret3;
    }
    else
    {
        ret1 = rec(i+1,j);
        ret2 = rec(i,j+1);
        return dp[i][j]=max({ret1,ret2});
    }


}
int main()
{
    cin>>s;
    cin>>t;

    n=s.size();
    m=t.size();

    memset(dp,-1,sizeof(dp));
    rec(0,0);
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(s[i]==t[j])
        {
            printf("%c",s[i]);
            i++;
            j++;
        }
        else if(dp[i+1][j]>=dp[i][j+1])
            i++;
        else
            j++;
    }
    return 0;

}














