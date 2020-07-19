#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    long long n,s;
    cin>>n>>s;
    for(int i=1; i<=n; i++)
        cin>>arr[i];

    sort(arr+1, arr+1+n);
    long long ans=0;
    for(int i=1; i<=n/2+1; i++)
        if(arr[i]>s)
            ans+=arr[i]-s;

    for(int i=(n/2)+1; i<=n; i++)
        if(arr[i]<s)
            ans+= s-arr[i];

    cout<<ans<<endl;

    return 0;
}







