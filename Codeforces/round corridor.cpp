#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{

    long long int n,m,q;

    cin>>n>>m>>q;

    while(q--)
    {
        long long int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;

        long long  int g = __gcd(n,m);

        n/=g;
        m/=g;

        if(x1==1)
            x2= (x2+n-1)/n;
        if(x1==2)
            x2= (x2+m-1)/m;
        if(y1==1)
            y2= (y2+n-1)/n;
        if(y1==2)
            y2= (y2+m-1)/m;


        if(x2==y2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }






    return 0;

}










