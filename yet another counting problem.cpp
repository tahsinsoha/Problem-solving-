#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,q;
        cin>>a>>b>>q;
        ll l,r;

        while(q--)
        {

            cin>>l>>r;

            ll lcm = (a*b)/__gcd(a,b); // lcm er multiple gula baad

            ll maxx= max(a,b);

            ll mult = (r/lcm) - ((l-1)/lcm);

            ll baad = (max(0ll,(mult-1)))*maxx ; // last er ta baad diye

            ll lastmul = (r/lcm)*lcm;

            // cout<<lcm<<" "<<maxx<<" "<<mult<<" "<<baad<<" "<<lastmul<<endl;

            if(lastmul +maxx >r  && lastmul>l)
            {

                baad+= (r-lastmul)+1;
            }

            else if( mult>0)
                baad+= min( r-l+1,maxx);

            ll aagey = ((l)/lcm)*lcm;

            // cout<<baad<<endl;

            if(  aagey!=l && aagey+maxx>l)
            {

                baad+= min(r-l+1,((aagey+maxx)-l));
            }
            // cout<<baad<<endl;
            //if(baad<0) cout<<r-l+1<<endl;
            cout<<(r-l+1)-baad<<endl;


        }
    }


    return 0;
}






