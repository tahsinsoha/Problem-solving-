#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a,b;
        scanf("%d : %d", &a, &b);
        double high=400;
        double low=1e-6;
        for(int j=0; j<100; j++)
        {
            double w=(low+high)/2.0;
            double x=w/b;
            double l=a*x;
            double d=sqrt( l*l + w*w );
            double r= d/2.0;
            double th= acos( 1-(0.5*(w*w)/(r*r) ) );
            double p= 2*r*th + 2*l;
            if(p>400)
                high=w;
            else
                low=w;
        }
        double l=a* (low/b);
        cout<<"Case "<<i<<": "<<setprecision(10)<<fixed<<l<<" "<<low<<endl;

    }

}
