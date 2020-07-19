#include<bits/stdc++.h>
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

        long long a,b,c;
        cin>>a>>b>>c;

        if(a<c)
            cout<<1<<" ";
        else
            cout<<-1<<" ";

        if(a*b>c)
            cout<<b<<endl;
        else
            cout<<-1<<endl;


    }


    return 0;

}









