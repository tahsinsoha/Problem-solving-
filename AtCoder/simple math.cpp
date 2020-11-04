#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
 unsigned ll    a,b,c;
   cin>>a>>b>>c;

 unsigned ll maxx = (a*b*c);

 unsigned ll ans =(( maxx*(maxx+1))/2)-max({a,b,c});

 cout<<ans<<endl;





    return 0;

}













