#include<bits/stdc++.h>
# define m 1000000007
using namespace std;
int arr[2000007];
long long cs[1000007];
long long ps[1000007];
int dp[107][1000007];
int n,x;
int main()
{

    cin>>n>>x;

    for(int i=1; i<=n; i++)
        cin>>arr[i];
    sort(arr+1,arr+1+n);

    // memset(dp,-1,sizeof(dp));

    for( int sum= 0; sum<=x; sum++ )
    {
        for( int j=n; j>=1; j-- )
        {
            if(sum==0)
                dp[j][sum]= 1;
            else
            {
                if( sum-arr[j]>=0 )
                    dp[j][sum]= dp[j][sum-arr[j]];
                dp[j][sum]= ( dp[j][sum]+dp[j+1][sum] )%m;
            }
        }
    }//

    cout<<dp[1][x]<<endl;



    return 0;

}




