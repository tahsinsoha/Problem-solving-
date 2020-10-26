#include<bits/stdc++.h>
using namespace std;
int arr[2000007];
long long cs[1000007];
long long ps[1000007];
int dp[2000007];
int n;
int ret(int sum)
{
    if(sum>n)
        return 0;
    if(sum==n)
        return 1;
    if(dp[sum]!=-1)
        return dp[sum];

    int q=0;

    for(int i=1; i<=6; i++)
        q=(q+ret(sum+i))%1000000007;


    return dp[sum]=q;
}
int main()
{

    cin>>n;

    memset(dp,-1,sizeof(dp));

    cout<<ret(0)<<endl;



    return 0;

}
