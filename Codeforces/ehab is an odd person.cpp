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
    {
        cin>>arr[i];
        if(arr[i]%2)
            cs[0]=1;
        else
            cs[1]=1;

    }

    if(cs[0]&& cs[1])
        sort(arr+1,arr+1+n);

    for(int i=1; i<=n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;

}

















