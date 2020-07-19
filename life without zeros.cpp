#include<bits/stdc++.h>
using namespace std;
int rz(int n)
{
    int d,x=0,y=1;

    while(n>0)
    {
        d=n%10;
        n/=10;
        if(d!=0)
        {
            x+=d*y;
            y*=10;
        }

    }
    return x;
}
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b;
    c=a+b;

    d=rz(a);
    e=rz(b);
    f=rz(c);
    if(f==(d+e))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
