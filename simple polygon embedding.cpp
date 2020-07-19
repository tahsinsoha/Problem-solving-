#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        n=n*2;
        double theta = (pi/n);
        double ans = 1 / tan(theta);
        cout<<std::fixed<<setprecision(10)<<ans<<endl;

    }



    return 0;
}




