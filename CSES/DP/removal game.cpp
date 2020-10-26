#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int arr[100007];
int brr[1000007];
long long ps[1000007];
ll dp[5007][5007];
string s,t;
int n,m;
set<int>st;
ll rec(int f, int l)
{

    if( f>l)
        return 0;
    if(dp[f][l]!=-1)
        return dp[f][l];

    ll q1= arr[f]+min(rec(f+2,l),rec(f+1,l-1)); //onno player chabe first player kom score paak ejonno min, cf dp section editorial dekha jaay
    ll q2 = arr[l]+min(rec(f,l-2),rec(f+1,l-1));

    return dp[f][l]=max({q1,q2});

}
int main()
{

    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    memset(dp,-1,sizeof(dp));

    cout<<rec(1,n)<<endl;

    return 0;

}

