#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        long long maxx = INT_MIN;
        long long ans=INT_MAX;
        for(int i=1; i<=9999; i++)
        {
            long long sum=0;
            int z = __builtin_popcount(i);

            if(z==k)
            {
                for(int j=1; j<=n; j++)
                {
                    sum+=(i&arr[j]);

                }
            }
            //cout<<sum<<" "<<z<<" "<<i<<endl;
            if(sum>maxx)
            {
                ans = i;
                maxx=sum;

            }


        }

        cout<<ans<<endl;
    }


    return 0;

}










