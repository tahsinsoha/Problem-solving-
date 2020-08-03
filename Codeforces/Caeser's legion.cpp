#include<bits/stdc++.h>
#define ll long long
#define m 100000000
using namespace std;
ll dp[107][107][19][19];
ll n1,n2,k1,k2;

ll rec(ll f, ll h, ll f1, ll h1)
{
    if(f+h==(n1+n2) )
        return 1;

    ll cnt=0;
    if(dp[f][h][f1][h1]!=-1)
        return (dp[f][h][f1][h1])%m;

    if(f1<k1 && f+1<=n1)
        cnt=((cnt%m)+(rec(f+1,h,f1+1,0))%m)%m;
    if(h1<k2 && h+1<=n2)
        cnt=((cnt%m)+(rec(f,h+1,0,h1+1))%m)%m;

    dp[f][h][f1][h1]=cnt%m;
    return (dp[f][h][f1][h1])%m;



}


int main()
{

    memset(dp,-1,sizeof(dp));
    cin>>n1>>n2>>k1>>k2;

    cout<<rec(0,0,0,0)<<endl;
    return 0;

}














