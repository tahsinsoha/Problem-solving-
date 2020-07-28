#include<bits/stdc++.h>
using namespace std;
long long arr[200007];

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,a;
        cin>>n>>x;
        long long maxx=INT_MIN;
        int f=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            if(a==x)
            {
                f=1;

            }
            maxx=max(a,maxx);
        }
        if(f==1 )
            cout<<1<<endl;
        else
            cout<<max(2LL,((maxx+x-1)/maxx))<<endl;
    }
    return 0;
}















