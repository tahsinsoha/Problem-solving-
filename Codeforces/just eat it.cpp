#include<bits/stdc++.h>
using namespace std;
long long int arr[100007];
int main()
{
    int n;

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long int sum=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        long long int ts=0;
        long long int maxx=INT_MIN;

        for(int i=1; i<=n-1; i++)
        {
            ts+=arr[i];
            maxx=max(ts,maxx);
            if(ts<0)
                ts=0;



        }
        ts=0;

        for(int i=2; i<=n; i++)
        {
            ts+=arr[i];
            maxx=max(ts,maxx);
            if(ts<0)
                ts=0;



        }

        if(maxx>=sum)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}


