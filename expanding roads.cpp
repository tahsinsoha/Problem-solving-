#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double l,n,c;
        cin>>l>>n>>c;
        double s=(1+n*c)*l;
        if(s==l)
            {
                cout<<"Case "<<i<<": "<<0<<endl;
                continue;
            }
        double high=s/0.00872665;
        double low=0.0;
        for(int j=0;j<100;j++)
        {
            double mid=(low+high)/2.0;
            //cout<<mid<<endl;
            double th=acos(1- ( 0.5* (l*l)/(mid*mid) ) );
            if(mid*th<s)
                high=mid;
            else
                low=mid;
        }
        double ll=sqrt( (high*high)-(l/2.0)*(l/2.0) );
        double res=high-ll;
        cout<<"Case "<<i<<": "<<setprecision(8)<<fixed<<res<<endl;

    }
}
