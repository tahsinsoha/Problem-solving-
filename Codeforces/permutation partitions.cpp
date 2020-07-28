#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;

    long long int n,k,a;
    vector<pair<long long, long long>>v;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {

        cin>>a;
        v.push_back({a,i});
    }
    long long sum=0,ans=1;
    sort(v.begin(),v.end(),greater<pair<long long,long long> >());
    vector<long long>v1;

    for(int i=0; i<k; i++)
    {

        sum+=v[i].first;
        v1.push_back(v[i].second);

    }
    sort(v1.begin(),v1.end());

    for(int i=1; i<k; i++)
    {
        ans*=(v1[i]-v1[i-1]);
        ans%=998244353;
    }
    cout<<sum<<" "<<ans<<endl;



    return 0;
}



