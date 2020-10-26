#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
long long dp[1007][1007];
string s[1007];
int n;
int rec(int i, int ch)
{    if(s[i][ch]=='*')
        return 0;
    if(i>=n || ch>=n)
        return 0;
    if(i==n-1 && ch==n-1)
        return 1;
    if( dp[i][ch]!=-1)
        return dp[i][ch];

    int ret1=0,ret2=0;

        ret1=rec(i+1,ch);
        ret2=rec(i,ch+1);

    return dp[i][ch]=(ret1+ret2)%m;


}
int main()
{

        cin>>n;

        for(int  i=0; i<n; i++)
        {
            cin>>s[i];

        }
    memset(dp,-1,sizeof(dp));

    cout<<rec(0,0)<<endl;


    return 0;

}













