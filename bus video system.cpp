#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    long long n,w;
    cin>>n>>w;
    long long minn=0,maxx=0;
    // long long minn=INT_MAX,maxx=0;
    long long sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(sum<0)
            minn=min(minn,sum);
        maxx=max(maxx,sum);

    }
    // cout<<maxx<<minn<<endl;
    if(minn<0)
        minn*=-1;
    maxx=w-maxx;
    //cout<<maxx<<minn<<endl;
    if(minn>w || maxx<0  || (maxx-minn+1)<0)
        cout<<0<<endl;
    else
        cout<<maxx-minn+1<<endl;

    return 0;
}















