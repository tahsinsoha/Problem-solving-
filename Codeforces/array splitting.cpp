#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n,k;
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int sum=arr[n]-arr[1];

    for(int i=1; i<n; i++)
    {
        ps[i]= arr[i]-arr[i+1];
    }
    sort(ps+1,ps+1+n);

    for(int i=1; i<k; i++)
        sum+=ps[i];

    cout<<sum<<endl;
    return 0;

}













