#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int dp[207][4007];
int n;
int rec(int i, int t)
{
    if(i>n)
        return 0;
    if(t>n*2)
        return 1e9;

    if(dp[i][t]!=-1)
        return dp[i][t];

    int ret1 = abs(t-arr[i])+rec(i+1,t+1);
    int ret2 = rec(i,t+1);

    return dp[i][t]=min(ret1,ret2);


}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        cin>>n;

        for(int i=1; i<=n; i++)
            cin>>arr[i];
        sort(arr+1,arr+1+n);
        memset(dp,-1,sizeof(dp));
        cout<<rec(1,1)<<endl;


    }


    return 0;

}













