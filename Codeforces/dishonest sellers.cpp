#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n+7],brr[n+7];
    pair<int,int>p[n+7];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>brr[i];
    }
    for(int i=0; i<n; i++)
    {
        p[i]  = pair<int,int>(arr[i]-brr[i],i);
    }

    sort(p,p+n);
    long long ans = 0;

    for(int i=0; i<k; i++)
        ans+=arr[p[i].second];

    for(int i=k; i<n; i++)
        ans+=min(arr[p[i].second],brr[p[i].second]);

    cout<<ans<<endl;

    return 0;
}








