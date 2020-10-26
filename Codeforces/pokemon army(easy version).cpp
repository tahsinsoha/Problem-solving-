#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
ll dp[300007][2];
ll n,q;

ll sum(int ind, int t)
{
    if(ind >n)
        return 0;
    if(dp[ind][t]!=-1)
        return dp[ind][t];


    ll q1=0,q2=0;

    int s=0;

    if(t==1)
        q1 = arr[ind]+sum(ind+1,!t);
    else
        q1 = -arr[ind]+sum(ind+1,!t);
    q2 = sum(ind+1,t);

    return dp[ind][t]=max(q1,q2);

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        cin>>n>>q;
        memset(dp,-1,sizeof(dp));
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        cout<<sum(1,1)<<endl;


    }


    return 0;

}













