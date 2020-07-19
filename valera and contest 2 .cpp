#bhul
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,r,sa,sk;

    cin>>n>>k>>l>>r>>sa>>sk;
    int rem1 = sk%k;
    int div1 = sk/k;

    for(int i=1; i<=k; i++)
    {
      if(rem1) {
            cout<<div1 + min(r-div1,rem1)<<" ";
       rem1-=  min(r-div1,rem1);
      }
        else cout<<div1<<" ";

    }

    int rem = (sa-sk)%(n-k);
    int div = (sa-sk)/(n-k);

    for(int i=1; i<=n-k; i++)
    {
      if(rem) {
            cout<<div + min(r-div,rem)<<" ";
       rem-=  min(r-div,rem);
      }

      else cout<<div<<" ";

    }

     return 0;

}

