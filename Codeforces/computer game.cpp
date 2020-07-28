#include<bits/stdc++.h>
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

        long long k,n,a,b;
        cin>>k>>n>>a>>b;

        long long l = 0, h= n;

        long long ans = INT_MIN;

        while(l<=h)
        {
            long long mid = (l+h)/2;
            if((a*mid+b*(n-mid))>=k)
            {
                h = mid-1;
            }
            else
            {
                l=mid+1;
                ans=max(ans,mid);
            }
        }
        if(k<n*b || ans<0)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;

    }


    return 0;

}









