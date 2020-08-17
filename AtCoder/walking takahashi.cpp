#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long x,k,d;
    cin>>x>>k>>d;

        if(k*d<=x)
        cout<< abs(x-k*d)<<endl;

    else
    {

        long long div = x/d;
       // cout<<div<<" "<<d<<endl;
        long long ans = x-div*d;

        long long mov =k-div;
        //cout<<ans<<" "<<mov<<endl;


        if(mov%2==0)
            cout<<ans<<endl;


        else {
          long long  val1 = abs(ans+d);
            long long val2 = abs(ans-d);

            cout<<min(val1,val2)<<endl;
        }

    }
    return 0;

}











