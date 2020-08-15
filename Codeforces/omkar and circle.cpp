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
    }

    for(int i=1; i<=n; i++)
    {
        arr[n+i]=arr[i];
    }
    long long  sum=0;
    for(int i=1; i<=n; i+=2)
        sum+=arr[i];

    long long  maxx=sum;

    for(int i=2; i<=2*n; i+=2)
    {

        sum-=arr[i-1];
        sum+=arr[i];

        maxx=max(maxx,sum);
    }

    cout<<maxx<<endl;
    return 0;

}









