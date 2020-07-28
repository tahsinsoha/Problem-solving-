#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long n,k;
    cin>>n>>k;
    long long ans = INT_MAX;

    for(int i=1; i<=k-1; i++)
    {
        if(n%i)
            continue;

        ans = min(ans, (n/i)*k+i);

    }
    cout<<ans<<endl;
    return 0;

}









