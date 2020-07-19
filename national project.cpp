#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,g,b;
        cin>>n>>g>>b;
        long long temp=n;
        n = ((n+1)/2);
        long long ans=g;
        if(ans>=n )
            cout<<temp<<endl;
        else
        {
            // cout<<n<<" "<<ans<<endl;
            long long lagbe  = n-ans;
            long long proti = g+b;
            //cout<<lagbe<<" "<<proti<<" "<<(lagbe*proti)/g<<endl;
            ans=ans+ (lagbe/g)*proti;
            if(lagbe%g)
            {
                ans+=b+lagbe%g;
            }
            if(ans<=temp)
                ans+=(temp-ans);
            cout<<ans<<endl;


        }

    }

    return 0;
}




