#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,z;
        cin>>n>>k>>z;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            cs[i]=cs[i-1]+arr[i];
        }

        long long sum=0, ans=0;
        int cnt=0;
        for(int i=1; i<=n; i++)
        {

            sum+=arr[i];
            if(cnt==k+1)
                break;
            cnt++;
            if(i==1)
                continue;

            ll p = 0;

            if(z)
            {
                ll l = min(z, (k-i+2)/2);
                ll r = min(z, (k-i+1)/2);
                ll rem = max(0, k-i+1-2*z);
                p = l*arr[i-1]+r*arr[i]+cs[i+rem]-cs[i];

            }
            ans=max(ans,sum+p);
        }
        cout<<ans<<endl;


    }



    return 0;

}










