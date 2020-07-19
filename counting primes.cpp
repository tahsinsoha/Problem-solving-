#include <bits/stdc++.h>
#define ll long long
#define mx 10000007
using namespace std;

bool arr[mx];
vector<ll> prime;
int prefix[mx];
void sieve()
{
 arr[0]=1;
    arr[1]=1;
    for(ll i=2;i<mx;i++)
    {
        if(arr[i]==0)
        {

            for(ll j=2;i*j<mx;j++)
                if(arr[i*j]==0)
                    arr[i*j]=1;

        }
    }
 prefix[0] = prefix[1] = 0;
    for (int p = 2; p < mx; p++) {
        prefix[p] = prefix[p - 1];
        if (!arr[p])
            prefix[p]++;
    }
}


int main()
{

    int t,l,r;
    cin>>t;
    sieve();
    for(int i=1;i<=t;i++){
            cin>>l>>r;


    //for(int i=0;i<=r;i++) cout<<arr[i]<<" ";
   // cout<<prefix[r]<<" "<<prefix[l-1]<<endl;
    cout<<prefix[r]-prefix[l-1]<<endl;

    }


}

