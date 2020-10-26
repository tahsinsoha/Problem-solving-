#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    scanf("%lld",&n);
    vector<long long int>v;

    for(long long  i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i!=i)
                v.push_back(n/i);
        }
    }

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
        printf("%lld\n",v[i]);

    return 0;

}














