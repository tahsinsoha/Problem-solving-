#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1000007];
int brr[1000007];
long long ps[1000007];
int dp[1007][100007];
string s,t;
int n,x;
int rec(int i, int sum)
{
    if(i==n)
        return 0;
    if(dp[i][sum]!=-1)
        return dp[i][sum];

    int ret1=0,ret2=0;

    if(sum-arr[i]>=0)
        ret1= brr[i]+rec(i+1,sum-arr[i]);
    ret2 = rec(i+1,sum);

    int ans = max(ret1,ret2);

    dp[i][sum]=ans;
    return dp[i][sum];


}
int main()
{
    cin>>n>>x;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n; i++)
        cin>>brr[i];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=x; j++)
        {
            dp[i][j]=-1;
        }

    }


    cout<<rec(0,x)<<endl;



    return 0;

}
