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

    if(arr[n]>=arr[n-1]+arr[n-2])
        cout<<"NO"<<endl;

    else
    {
        cout<<"YES"<<endl;
        swap(arr[n],arr[n-1]);

        for(int i=1; i<=n; i++)
            cout<<arr[i]<<" ";

    }

    return 0;

}














