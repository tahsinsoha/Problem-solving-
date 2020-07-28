#include<bits/stdc++.h>
using namespace std;
int dp[1010][2],vis[1010][2];
int arr1[1010],arr2[1010],tow2[1010],tow1[1010];
int n,p;
int rec(int i, bool first)
{
    if(i>=n)
        return 0;
    if(vis[i][first]==p)
        return dp[i][first];
    int q1 = INT_MAX, q2 =INT_MAX, q3= INT_MAX;
    int val = (first)?arr1[i]:arr2[i];
    int lt = (first)? tow2[i+1]:tow1[i+1];
    if(i<n-1)
    {
        q1 = val+rec(i+1,first);
        q2 = val+lt+rec(i+1,!first);
    }
    if(i==n-1)
    {
        q1=val;
    }
    vis[i][first]=p;
    return dp[i][first] =min(q1,q2);
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>n;
        p++;
        for(int i=0; i<n; i++)
            cin>>arr1[i];
        for(int i=0; i<n; i++)
            cin>>arr2[i];
        for(int i=1; i<n; i++)
            cin>>tow2[i];
        for(int i=1; i<n; i++)
            cin>>tow1[i];
        int ans1 =rec(0,1);
        p++;
        int ans2=rec(0,0);
        printf("Case %d: %d\n",i,min(ans1,ans2));
    }

    return 0;
}
