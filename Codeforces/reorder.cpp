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
       int n,m;
       cin>>n>>m;
       int sum=0;

       for(int i=1;i<=n;i++)
        cin>>arr[i],sum+=arr[i];

        if(sum==m)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;


    }


    return 0;

}













