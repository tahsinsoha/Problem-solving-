#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a,b,c,d;
    long long x,y,x1,y1,x2,y2;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;

        if(x1==x2 && (a!=0 || b!=0))
            cout<<"NO"<<endl;

        else if(y1==y2 &&(c!=0 || d!=0))
            cout<<"NO"<<endl;



        else if( x1<=(x-a+b) && x2>=(x-a+b) && y1<=(y-c+d) && y2>=(y-c+d) )
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;


    }

    return 0;
}
