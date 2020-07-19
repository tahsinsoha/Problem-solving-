#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long a,b;
        cin>>a>>b;
        long long x=9;
        long long ans=0;
        while(x<=b)
        {
            x*=10;
            x+=9;
            ans++;

        }


        ans*=a;

        cout<<ans<<endl;
    }
    return 0;
}










