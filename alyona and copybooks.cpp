#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n%4==0)
    {
        cout<<0<<endl;
        return 0;
    }

    long long lagbe = 4-(n%4);
   // cout<<lagbe<<endl;

    if(lagbe==1)
        cout<< min((min(a,b+c)),3*c)<<endl;

    else if(lagbe==2)
        cout<<min(min(2*a, b ), 2*c)<<endl;

    else
        cout << min (min(c, b+a ), 3*a)<<endl;


    return 0;

}











