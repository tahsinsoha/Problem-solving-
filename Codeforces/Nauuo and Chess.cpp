#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n;
    cin>>n;

    cout<<(n/2)+1<<endl;
    int ans=n/2+1;
    int cnt=1;

    for(int i=1; i<=ans; i++)
    {
        cout<<1<<" "<<i<<endl;
    }
    for(int i=2; i<=n-ans+1; i++)
    {
        cout<<i<<" "<<ans<<endl;
    }
    return 0;

}















