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
        map<int,int>mpp;
        long long ans=0;
        for(int i=1; i<=n; i++)
        {
            int a;
            cin>>a;

            int cnt=0;

            while(a)
            {
                a/=2;
                cnt++; //MSB kothay ase
            }
            ans+=mpp[cnt];
            mpp[cnt]++;

        }

        cout<<ans<<endl;

    }


    return 0;

}













