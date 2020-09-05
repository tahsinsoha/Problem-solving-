#include<bits/stdc++.h>
using namespace std;
long long int arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

    }
    long long int cnt=arr[n];
    long long int maxx=arr[n];
    for(int i=n-1; i>=1; i--)
    {
        maxx=min(arr[i],maxx-1);
        cnt+=maxx;
        if(maxx==0)
            break;

    }
    cout<<cnt<<endl;
    return 0;

}
















