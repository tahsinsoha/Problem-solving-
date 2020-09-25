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
        int n;
        cin>>n;

        int x;
        cin>>x;

        int cnt=0;
        int pos=0;
        int neg=0;

        for(int i=1; i<=n; i++)
        {
            int z;
            cin>>z;

            if(z==x)
                cnt++;
            if(z<x)
                neg+=(x-z);
            else
                pos+=(z-x);

        }



        if(cnt==n)
            cout<<0<<endl;

        else if(abs(neg)==abs(pos)|| cnt>0)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }


    return 0;

}













