#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[40];
ll Pow(ll x, ll y )
{
    ll ans =1;
    while(y>0)
    {
        if(y&1)
          {
            ans*=x;
          }
        x*=x;
        y>>=1;

    }
    return ans;
}
int main()
{
    ll q,n;
    ll ans =0;
    int pos;
    cin>>q;
    for(int i=0; i<=39; i++)
    {
        arr[i]=Pow(3,i);
    }
    while(q--){
        cin>>n;
        ans =0;
        for(int i=0;i<=39;i++){
              if(ans>=n) break;
              ans+=arr[i];
              pos=i;
        }
        for(int j=pos;j>=0;j--){
            if(ans-arr[j]>=n) {
                ans-=arr[j];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
