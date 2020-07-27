#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  l,r,m;
        cin>>l>>r>>m;

        for(int i=l; i<=r; i++)
        {

            long long int rem = m%i;

            if(rem<=(r-l) && m!=rem)
            {
                cout<<i<<" "<<l+rem<<" "<<l<<endl;
                break;

            }

            rem=i-rem;



            if(rem<=(r-l) )
            {
                cout<<i<<" "<<l<<" "<<l+rem<<endl;
                break;

            }


        }
    }
    return 0;

}


