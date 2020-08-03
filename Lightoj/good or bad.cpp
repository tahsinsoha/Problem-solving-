#include<bits/stdc++.h>
using namespace std;
int n,p;
int arr[1047];
int dp[57][57][57];
string s;
int func(int i,int v, int c)
{
    //cout<<i<<" "<<v<<" "<<c<<endl;
    if(i==n)
    {
        if(v>=3)
            return 1;
        if(c>=5)
            return 1;

        return 0;

    }
    if(v>=3)
        return 1;
    if(c>=5)
        return 1;
    if(dp[i][v][c]!=-1)
        return dp[i][v][c];
    int x=0,y=0,z=0;

    if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        z= func(i+1, v+1, 0);
    else if(s[i]=='?')
    {

        x= func(i+1, v+1, 0);
        y=func(i+1, 0, c+1);
        // cout<<x<<" "<<y<<endl;
        if(x==y)
            z=x;
        else
            z=2;


    }

    else
        z= func(i+1,0,c+1);

    return dp[i][v][c]=z;



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
        int p = func(0,0,0);
        if( p==1 )
            cout<<"Case "<<i<<": "<<"BAD"<<endl;
        else if(p==2)
            cout<<"Case "<<i<<": "<<"MIXED"<<endl;
        else
            cout<<"Case "<<i<<": "<<"GOOD"<<endl;

    }

    return 0;
}


