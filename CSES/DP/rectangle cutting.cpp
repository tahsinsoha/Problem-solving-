#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int arr[100007];
int brr[1000007];
long long ps[1000007];
int dp[507][507];
string s,t;
int n,m;
int rec(int a, int b)
{
    // cout<<i<<" "<<j<<endl;
    if(a==b)
        return 0;
    if(dp[a][b]!=-1)
        return dp[a][b];

    int ret=INT_MAX;


    for(int i=1; i<a; i++)
        ret=min(ret, 1+rec(i,b)+rec(a-i,b));

    for(int i=1; i<b; i++)
        ret=min(ret, 1+rec(a,i)+rec(a,b-i));

    return dp[a][b]=ret;


}
int main()
{

    cin>>n>>m;
    memset(dp,-1,sizeof(dp));

    cout<<rec(n,m)<<endl;

    return 0;

}

//shob gula rectangle kei square korte hobe , mane bunch of squares
