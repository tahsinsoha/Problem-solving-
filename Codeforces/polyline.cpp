#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int x[3];
    int y[3];

    for(int i=0; i<3; i++)
    {
        cin>>x[i]>>y[i];
    }

    if(x[0]==x[1] && x[1]==x[2])
    {
        cout<<1<<endl;
        return 0;
    }
    if(y[0]==y[1] && y[1]==y[2])
    {
        cout<<1<<endl;
        return 0;
    }
    if(x[0]==x[1] && (y[2]<=min(y[0],y[1]) || y[2]>=max(y[0],y[1])))
    {

        cout<<2<<endl;
        return 0;
    }
    if(x[1]==x[2] && (y[0]<=min(y[2],y[1]) || y[0]>=max(y[2],y[1])))
    {

        cout<<2<<endl;
        return 0;
    }
    if(x[0]==x[2] && (y[1]<=min(y[0],y[2]) || y[1]>=max(y[0],y[2])))
    {

        cout<<2<<endl;
        return 0;
    }

    if(y[0]==y[1] && (x[2]<=min(x[0],x[1]) || x[2]>=max(x[0],x[1])))
    {

        cout<<2<<endl;
        return 0;
    }
    if(y[1]==y[2] && (x[0]<=min(x[2],x[1]) || x[0]>=max(x[2],x[1])))
    {

        cout<<2<<endl;
        return 0;
    }
    if(y[0]==y[2] && (x[1]<=min(x[0],x[2]) || x[1]>=max(x[0],x[2])))
    {

        cout<<2<<endl;
        return 0;
    }

    cout<<3<<endl;


    return 0;

}












