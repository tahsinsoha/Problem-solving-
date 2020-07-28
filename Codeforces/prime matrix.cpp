#include<bits/stdc++.h>
#define mx 1000007
using namespace std;
bool a[2000007];
long long np[2000007];
long long arr[600][600],c[600][600];
void sieve()
{
    a[0]=a[1]=1;
    a[2]=0;
    for(long long i=4; i<2000000; i=i+2)
        a[i]=1;
    for(long long i=3; i<2000000; i=i+2)
    {
        if(!a[i])
        {
            for(long long j=i*i; j<2000000; j=j+2*i)
                a[j]=1;
        }
    }
    long long pre=-1;
    for(long long i=2000000-1; i>=1; i--)
    {
        if(!a[i])
            pre=i;
        np[i]=pre;
    }
}
int main()
{
    long long n,m,sum;
    cin>>n>>m;
    sieve();

    for(long long i=0; i<n; i++ )
        for(long long j=0; j<m; j++)
        {
            cin>>arr[i][j];
            c[i][j]=np[arr[i][j]]-arr[i][j];
        }
    //  for(long long i=1;i<=20;i++){
    //     cout<<nextprime[i]<<" ";
    //  }
    //  cout<<endl;

    long long ans = 10000000;
    for(long long i=0; i<n; i++ )
    {
        sum=0;
        for(long long j=0; j<m; j++)
        {
            sum=sum+c[i][j];
        }
        ans =min(ans,sum);
    }
    for(long long j=0; j<m; j++ )
    {
        sum=0;
        for(long long i=0; i<n; i++)
        {
            sum=sum+c[i][j];
        }
        ans =min(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}
