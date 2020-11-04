#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll  p,q;
        cin>>p>>q;
        ll ans=INT_MIN;

        if(p%q!=0)
        {
            cout<<p<<endl;
            continue;
        }

        // ekta common prime factor er shob instance p theke shoraye dekhtesi

        for( ll i = 1; i<= sqrt(q) ; i++)
        {

           if(q%i==0 )
           {
               ll z = p;

               while(i!=1 && z%i==0)
               {
                   z/=i;
                   if(z%q!=0)
                   {
                       ans=max(ans,z);
                   }
               }

               z=p;
                while( z%(q/i)==0)
               {
                   z/=(q/i);
                   if(z%q!=0)
                   {
                       ans=max(ans,z);
                   }
               }


           }


        }

        cout<<ans<<endl;

    }

}

















