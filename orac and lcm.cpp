#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long int n;
    cin>>n;

    for(long long int i=1; i<=n; i++)
        cin>>arr[i];
    cs[n]= arr[n];
    for(long long int i=n-1; i>=1; i--)
    {

        cs[i]= __gcd(arr[i],cs[i+1]);
    }



    vector<long long int>gcd;
    for(long long int i=1; i<n; i++)
    {

        if(i+1<=n)
            gcd.push_back((arr[i]*cs[i+1])/(__gcd(arr[i],cs[i+1])));

    }
   long long  int ans = gcd[0];

    for(long long int i=1; i<gcd.size(); i++)
    {

        ans = __gcd(ans,gcd[i]);
    }

    cout<<ans<<endl;

    return 0;

}








