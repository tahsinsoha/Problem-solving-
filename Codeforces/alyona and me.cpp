#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    sort(arr+1,arr+1+n);

    arr[1]=1;

    for(int i=2; i<=n; i++)
    {

        if( arr[i]-arr[i-1]-1>0)
        {
            arr[i]= arr[i-1]+1;
        }
    }

    cout<<arr[n]+1<<endl;

    return 0;
}














