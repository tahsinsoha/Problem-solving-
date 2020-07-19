#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        double d= a*c/b;
        if(b-d<=0)
        {
            cout<<"Case "<<i<<": "<<"-1"<<endl;
            continue;
        }
        double res=(a*c+d*c+a*d+b*d)/(b-d);
        cout<<"Case "<<i<<": "<<setprecision(10)<<fixed<<res<<endl;
    }
}
