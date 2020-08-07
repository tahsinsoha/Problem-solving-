#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
ll arr[100007];
ll dp[100007];
string s,t,p;
int len1,len2,len3;
ll func(int i )
{
    //cout<<i<<" "<<p<<endl;
    if(i>n)
        return 0;
    if(dp[i]!=-1)
        return dp[i];

    ll q1=0,q2=0,q3=0;
    if(i<=n)
        q1= arr[i]+func(i+2);
    if(i+1<=n)
        q2 =arr[i]+arr[i+1]+func(i+4);
    if(i+2<=n)
        q3=arr[i]+arr[i+1]+arr[i+2]+func(i+6);

    //cout<<q1<<" "<<q2<<" "<<q3<<endl;
    return dp[i]=max(max(q1,q2),q3);

}

int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        cout<<func(1)<<endl;

    }

    return 0;
}


