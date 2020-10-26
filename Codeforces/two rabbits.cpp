#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x,y,a,b;

        cin>>x>>y>>a>>b;

        if((y-x)%(a+b)==0)
            cout<<(y-x)/(a+b)<<endl;

        else
            cout<<-1<<endl;
    }

    return 0;

}













