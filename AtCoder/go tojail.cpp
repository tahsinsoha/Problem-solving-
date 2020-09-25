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

    int cnt=0;
    int f=0;

    while(t--)
    {
        int x,y;


        cin>>x>>y;
        if(cnt==3)
            f=1;

        if(x==y)
            cnt++;
        else
            cnt=0;


    }

    if(cnt==3)
        f=1;

    if(f==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    return 0;

}













