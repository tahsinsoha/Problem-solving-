#include<bits/stdc++.h>
#define ll long long
using namespace std;
double arr[3007];
long long cs[1000007];
long long ps[1000007];
double dp[3007][3007];
int n;
double rec(int i, int h, int t)
{
    //cout<<i<<" "<<h<<" "<<t<<endl;
    if(i>n)
    {
        if(h>t)
            return 1.0;

        else
            return 0.0;

    }

    if(dp[i][t]!=-1.0)
        return dp[i][t];

    double ret=0;

    ret+=arr[i]*rec(i+1,h+1,t);
    ret+=(1.0-arr[i])*rec(i+1,h,t+1);
    return dp[i][t]=ret;


}
int main()
{
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];


    for(int i=0; i<=n+1; i++)
        for(int j=0; j<=n+1; j++)
            dp[i][j]=-1.0;

    cout << std::fixed << std::setprecision(10) << rec(1,0,0)<<endl;

    return 0;

}













