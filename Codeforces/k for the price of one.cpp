#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p,k;
        cin>>n>>p>>k;

        long long pre=0,ans=0;

        for(int i=1; i<=n; i++)
            cin>>arr[i];

        sort(arr+1,arr+n+1);

        for(int i=1; i<=k+1; i++)
        {

            long long sum=pre;
            if(sum>p)
                break;

            long long cnt=i-1;
            for(int j=i+k-1; j<=n; j+=k)
            {

                if(sum+arr[j]<=p)
                {
                    sum+=arr[j];
                    cnt+=k;
                    // cout<<sum<<" "<<cnt<<endl;
                }

                else
                    break;
            }
            pre+=arr[i];

            ans = max(ans,cnt);
        }

        cout<<ans<<endl;
    }

    return 0;
}





