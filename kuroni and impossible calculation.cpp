#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
        cin>>arr[i];
    long long ans=1;
    if(n>=1000)
        cout<<0<<endl;


    else
    {

        for(int i=1; i<=n-1; i++)
        {

            for(int j=i+1; j<=n; j++)
            {
                ans*= (abs(arr[i]-arr[j]));
                ans%=m;


            }
        }

        cout<<ans<<endl;
    }
    return 0;

}










