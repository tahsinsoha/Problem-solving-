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
        int n;
        cin>>n;
        long long sum=0;
        long long maxx=0;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            maxx=max(maxx,arr[i]);
        }

        if(maxx>sum-maxx || sum%2)
            cout<<"T"<<endl;

        else
            cout<<"HL"<<endl;
    }

    return 0;

}











