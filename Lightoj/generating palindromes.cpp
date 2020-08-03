#include<bits/stdc++.h>
using namespace std;
int n,p;
int arr[1047];
int dp[1047][1047];
string s;
int rec(int l,int r)
{

    if(l>=r)
    {
        return 0;

    }

    if(dp[l][r]!=-1)
        return dp[l][r];

    int i=0;
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;

    if(s[l]!=s[r])
    {

        i++;
        x=i+rec(l+1,r);

        y=i+rec(l,r-1);


    }
    else
    {

        z= i+rec(l+1,r-1);
    }


    dp[l][r] =min(x,min(y,z));
    return dp[l][r];


}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>s;
        n=s.size();
        cout<<"Case "<<i<<": "<<rec(0,n-1)<<endl;

    }

    return 0;
}

