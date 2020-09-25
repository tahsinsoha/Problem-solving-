#include<bits/stdc++.h>
using namespace std;
int arr[2000007];
long long cs[1000007];
long long ps[1000007];
int dp[200007][2];
int n;
int ret(int i,int t)
{
    if(i>n)
        return 0;
    if(dp[i][t]!=-1)
        return dp[i][t];

    int minn=INT_MAX;

    if(t==0)
    {

        minn=min(minn,ret(i+1,1)+arr[i]);

        if(i+1<=n)
            minn=min(minn,ret(i+2,1)+arr[i]+arr[i+1]);
    }

    else
    {
        minn=min(minn,ret(i+1,0));

        minn=min(minn,ret(i+2,0));


    }

    return dp[i][t]=minn;

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

        memset(dp,-1,sizeof(dp));

        cout<<ret(1,0)<<endl;

    }


    return 0;

}












