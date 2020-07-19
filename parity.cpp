#include<bits/stdc++.h>
using namespace std;
long long  Pow( long long x, long long y, long long m )
{
    long long ans= 1;

    while(y>0)
    {
        if(y&1)
            ans= (ans*x)%m;
        x=(x*x)%m;
        y>>=1;
    }

    return ans%m;
}

int main()
{
    long long int b,k,x;
    long long int ans=0;
    cin>>b>>k;
    long long int n=k;
    for(int i=1; i<=k; i++)
    {
        cin>>x;
        ans=ans+x*Pow(b,n-1,2);
        n--;
    }
    if(ans&1)
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
    return 0;
}
