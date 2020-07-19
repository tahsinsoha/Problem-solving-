#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,r,sa,sk;

    cin>>n>>k>>l>>r>>sa>>sk;
    int rem1 = sk%k;
    int div1 = sk/k;
    for(int i=1; i<=rem1; i++)
        cout<<div1+1<<" ";


    for(int i=1; i<=k-rem1; i++)
        cout<<div1<<" ";

        if(n-k==0){
            return 0;
        }

    int rem = (sa-sk)%(n-k);
    for(int i=1; i<=rem; i++)
    {
        cout<<((sa-sk)/(n-k))+1<<" ";

    }
    for(int i=1; i<=n-k-rem; i++)
    {
        cout<<((sa-sk)/(n-k))<<" ";

    }



    return 0;

}
