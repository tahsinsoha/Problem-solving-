#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        long long k;
        cin>>k;
        map<long long, long long>mpp;
        long long maxx = INT_MIN;

        for(int i=1; i<=n; i++)
        {
            long long x;
            cin>>x;
            x %=k ;
            if(x==0)
                continue;
            long long rem = k-x;
            long long cnt =  mpp[x]++;
            maxx = max(maxx, (1LL*cnt*k)+rem+1);
        }
        if(maxx<0)
            cout<<0<<endl;
        else
            cout<<maxx<<endl;

    }
    return 0;

}














