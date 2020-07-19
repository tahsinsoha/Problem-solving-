#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    long long l,r,p,q,k;

    cin>>l>>r>>p>>q>>k;
   l = max(l,p);
   r = min(r,q);

   if(l>r) cout<<0<<endl;
   else {

    if(k>=l &&k<=r) cout<< (r-l)<<endl;
    else cout<<r-l+1<<endl;


   }

    return 0;
}









