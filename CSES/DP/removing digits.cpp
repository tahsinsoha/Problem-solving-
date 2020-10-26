#include<bits/stdc++.h>
using namespace std;
int arr[2000007];
long long cs[1000007];
long long ps[1000007];
int dp[1000007];
int n,x;

int ret(int i)
{
    // cout<<i<<endl;
    if(i==0)
        return 0;

    if(dp[i]!=-1)
        return dp[i];

    int p=i;
    int minn=INT_MAX;
    while(p)
    {
        int z = p%10;
        if(z==0)
        {
            p/=10;
            continue;
        }
        int q = 1+ret(i-z);

        minn=min(q,minn);
        p/=10;

    }

    return dp[i]=minn;
}
int main()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));

    cout<<ret(n)<<endl;

    return 0;

}


