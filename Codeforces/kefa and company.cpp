#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
pii arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n,d;
    cin>>n>>d;

    for(int i=1; i<=n; i++)
        cin>>arr[i].ff>>arr[i].ss;
    sort(arr+1,arr+1+n);

    int i=1,j=2;
    ll ans=arr[1].ss, now=arr[1].ss;

    while(i<=n && j<=n)
    {
        //cout<<arr[i].ff<<" "<<arr[j].ff<<endl;
        if(arr[j].ff-arr[i].ff<d)
            now+=arr[j].ss,ans=max(ans,now),j++;
        else
            now-=arr[i].ss,i++;

        //cout<<now<<endl;

    }
    //ans=max(ans,now);
    cout<<ans<<endl;

    return 0;

}













