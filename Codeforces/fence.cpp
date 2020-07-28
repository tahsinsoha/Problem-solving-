#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];

int main()
{
 long long  n,k,a;
    cin>>n>>k;
 long long  sum=0;
    for(long long i=1; i<=n; i++)
    {
        cin>>a;
        sum+=a;
        arr[i]=sum;

    }

 long long  minn = LONG_MAX;
 long long  now,j=1;
    for(long long i=k; i<=n; i++)
    {
        now = arr[i]-arr[i-k];
        if(now<minn)
        {
            minn=now;
            j=i-k+1;

        }

    }
    cout<<j<<endl;
    return 0;
}


