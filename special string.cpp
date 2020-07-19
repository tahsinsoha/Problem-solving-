#include<bits/stdc++.h>
using namespace std;
long long dp[35][4][4];
int vis[35][4][4];
int n,p;
long long rec(int i, int p1, int p2)
{
    if(i>=n)
        return 1LL;
    if(vis[i][p1][p2]==p)
    {
        return dp[i][p1][p2];
    }
    long long t =0;
    if(p1!=p2)
    {
        if(p1+p2==3 && p1 && p2 )
        {
            t+= rec(i+1,1,p1);
            t+=rec(i+1,2,p1);
        }

        else if(p1+p2==4  )
        {
            t+= rec(i+1,3,p1);
            t+=rec(i+1,1,p1);
        }

        else if(p1+p2==5  )
        {
            t+= rec(i+1,3,p1);
            t+=rec(i+1,2,p1);
        }

        else
        {
            t+= rec(i+1,1,p1);
            t+=rec(i+1,2,p1);
            t+=rec(i+1,3,p1);
        }
    }
    else
    {

        t+= rec(i+1,1,p1);
        t+=rec(i+1,2,p1);
        t+=rec(i+1,3,p1);

    }

    vis[i][p1][p2]=p;
    return dp[i][p1][p2]=t;

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        p++;
        cin>>n;
        cout<<rec(0,0,0)<<endl;
    }

    return 0;
}
