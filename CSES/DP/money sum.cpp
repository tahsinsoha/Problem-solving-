#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int arr[100007];
int brr[1000007];
long long ps[1000007];
int dp[107][100007];
string s,t;
int n,m;
set<int>st;
void rec(int i, int sum)
{
    if(sum)
        st.insert(sum);
    if(i>n)
        return;
    if(dp[i][sum]!=-1)
        return;

    dp[i][sum]=1;
    rec(i+1,sum+arr[i]);
    rec(i+1,sum);

}
int main()
{

    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    rec(1,0);

    cout<<st.size()<<endl;

    for(auto it: st)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;

}

