#include<bits/stdc++.h>
using namespace std;
long long int dp1[3005],dp2[3005];
long long int arr[3005],cost[3005];
int main()
{
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++) dp1[i]=dp2[i]=1e15;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
        cin>>cost[i];
    long long int minn=1e15;

    for(int i=0; i<n; i++)
        for(int j=0; j<i; j++)
            if(arr[j]<arr[i])
                dp1[i]=min(dp1[i], cost[i]+cost[j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<i; j++)
            if(arr[j]<arr[i])
                dp2[i]=min(dp2[i], cost[i]+dp1[j]);

    for(int i=0; i<n; i++)
    {
        //cout<<dp2[i]<<endl;
           minn=min(minn,dp2[i]);


    }

//cout<<minn<<endl;


       if(minn != 1e15) cout<<minn<<endl;

       else cout<<-1<<endl;
        return 0;
}
