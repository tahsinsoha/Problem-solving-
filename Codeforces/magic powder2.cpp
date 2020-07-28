#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;

    long long arr[n+5],brr[n+5];

    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
        cin>>brr[i];
    long long l=0, h=10000000000, ans=0;

    while(l<=h)
    {
        long long m= (l+h)/2;
        long long use=0;
        for(long long i=0; i<n; i++)
    {
        use+=max(0ll, arr[i]*m-brr[i]);
            if(use>k) break;
        }

        if(use>k) h=m-1;
                    else l=m+1, ans=m;
        }
cout<<ans<<endl;
return 0;
}
