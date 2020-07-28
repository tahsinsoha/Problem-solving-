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

        long long n;
        long long ans1=-1,ans2=-1;
        long long lcm = INT_MAX;
        cin>>n;

        if(n%2==0)
            cout<<n/2<<" "<<n/2<<endl;

        else
        {

            for(long long int i=2; i*i<=n; i++)
            {
                // cout<<i<<endl;
                // cout<<i<<endl;

                      if(n%i==0){
                    long long p = ((i*(n-i))/__gcd(n-i,i));
                    long long g = n/i;
                    long long q = ((g*(n-g))/__gcd(n-g,g));
                    //cout<<p<<endl;

                    if(q<lcm)
                        lcm=q, ans1=g,ans2=n-g;

                        if(p<lcm) ans1=i,ans2=n-i;

                      }

            }

            if(ans1==-1 && ans2==-1)
                cout<<1<<" "<<n-1<<endl;
            else if(ans1<ans2)
                cout<<ans1<<" "<<ans2<<endl;
            else
                cout<<ans2<<" "<<ans1<<endl;
        }


    }


    return 0;

}










