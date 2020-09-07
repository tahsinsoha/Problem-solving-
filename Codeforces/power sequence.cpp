#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long sum=0;
    long long ans=1e18;
    sort(arr,arr+n);


    for(int i=1;; i++) //kar power
    {

        long long p = 1;

        sum=0;

        for(int j=0; j<n; j++)
        {

            if(p>=1e10)
            {

                sum=-1;
                break;
            }
            else
            {
                long long z = abs(arr[j]-p);

                sum+=z;
            }

            p*=i;

        }
        if(sum==-1)
            break;

        else
            ans = min(ans,sum);
    }

    cout<<ans<<endl;


    return 0;

}











