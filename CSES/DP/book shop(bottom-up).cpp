#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1000007];
int brr[1000007];
long long ps[1000007];
int dp[1007][100007];
string s,t;
int n,x;
int main()
{
    cin>>n>>x;

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    for(int i=1; i<=n; i++)
        cin>>brr[i];

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=x; j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else
            {
                int ret1 = dp[i-1][j];
                int ret2=0;
                if(j-arr[i]>=0)
                    ret2=brr[i]+dp[i-1][j-arr[i]];

                    dp[i][j]=max(ret1,ret2);

            }

        }
    }

    cout<<dp[n][x]<<endl;


    return 0;

}

