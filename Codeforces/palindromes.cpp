#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int dp[5000][5000];
int pal(int i, int j)
{
    if(i>=j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
        int q1=INT_MAX,q2=INT_MAX,q3=INT_MAX;
     if(s[i]==s[j]) q1= pal(i+1,j-1);
     else {
        q2= 1+pal(i+1,j);
        q3=1+pal(i,j-1);
     }
return dp[i][j]=min(q1,min(q2,q3));

}
int main()
{
    cin>>n;
    cin>>s;
    memset(dp,-1,sizeof(dp));
    cout<<pal(0,n-1)<<endl;

    return 0;
}
