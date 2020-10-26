#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
long long dp[5007][5007];
string s,t;
int n,m;
int rec(int i, int j)
{
    if(i>=m || j>=n )
    {
        return max(abs(i-m),abs(j-n));
    }
    if(dp[i][j]!=-1)
        return dp[i][j];

    int ret1=0,ret2=0,ret3=0;
    int ans;

    if(s[i]==t[j])
    {

        ans=rec(i+1,j+1);
    }

    else if(s[i]!=t[j])
    {
        ret1 =1+ rec(i+1,j+1);
        ret2 = 1+rec(i,j+1);
        ret3 = 1+rec(i+1,j);
        ans=min({ret1,ret2,ret3});
    }
    return dp[i][j]=ans;


}
int main()
{
    cin>>s>>t;
    m=s.size();
    n=t.size();

    memset(dp,-1,sizeof(dp));

    cout<<rec(0,0)<<endl;


    return 0;

}














