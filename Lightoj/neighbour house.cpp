#include<bits/stdc++.h>
using namespace std;
int n,p;
int dp[25][5],vis[25][5],arr[25][5];
int func(int i,int col)
{
    if(i>=n)
        return 0;
    if(vis[i][col]==p)
        return dp[i][col];
    int q1=INT_MAX,q2=INT_MAX,q3=INT_MAX;
    if(col!=0)
        q1=arr[i][0]+func(i+1,0);
    if(col!=1)
        q2=arr[i][1]+func(i+1,1);
    if(col!=2)
        q3=arr[i][2]+func(i+1,2);

    vis[i][col]=p;
    return dp[i][col]=min(q1,min(q2,q3));

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        p++;
        cin>>n;
        for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
                cin>>arr[i][j];
        cout<<"Case "<<i<<": "<<func(0,-1)<<endl;

    }

    return 0;
}
