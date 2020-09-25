#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
long long int Pow(long long int a,long long int b)
{
    long long int res=1;
    while(b>0)
    {
        if(b&1)
            res= ((res) * (a));
        b=b>>1;
        a= (((a) *(a)));

    }
    return res;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        long long int cnt=0;
        long long  int z=0;
        long long  int p=1;
        long long  int ans=0;

        while(n>=z)
        {

            long long x = Pow(2,p)-1;
            x= (x*(x+1))/2;
            // cout<<x<<endl;
            if(z+x<=n)
            {


                z+=x;
                p++;
                ans++;
            }
            else
                break;

        }

        cout<<ans<<endl;
    }


    return 0;

}














