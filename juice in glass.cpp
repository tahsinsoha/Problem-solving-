#include <bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int r1,r2,h,p;
        cin>>r1>>r2>>h>>p;
        double R=(double)p*(r1-r2)+(double)r2*h;
        R/=h;
        double v=(pi*p)/3;
        v*=(R*R+r2*r2+r2*R);
        cout<<"Case "<<i<<": "<<setprecision(10)<<fixed<<v<<endl;
    }
}
