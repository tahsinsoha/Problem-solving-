#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);


    }

    sort(v.begin(),v.end(),greater<int>());
    int sum=0;

    for(int i=0; i<k; i++)
    {
        sum+=v[i];
    }

    int div = n/k;
    int rem = n%k;
    cout<<sum<<endl;
    cout<<n-k+1<<" ";

    for(int i=2; i<=k; i++)
    {
        cout<<1<<" ";
    }

    cout<<endl;

    return 0;

}










