#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long x,y,a,b;

    cin>>x>>y>>a>>b;
    unsigned long long cnt=0;


    while( x<1000000007 && x*a<x+b && x*a<y)
        x*=a,cnt++;

    cnt+= (y-(x+1))/b;

    cout<<cnt<<"\n";

    return 0;

}













