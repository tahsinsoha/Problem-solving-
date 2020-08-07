#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

long long  Pow(int a, int b)
{
    long long  res=1;
    while(b>0)
    {
        if(b&1)
            res= res*a;
        b=b>>1;
        a= a*a;

    }
    return res;
}

int main()
{
    long long   n,k;
    cin>>n>>k;
    long long p;
    p =Pow(10,k);
    long long  g = __gcd(n,p);
    //cout<<p<<" "<<g<<endl;
    cout<<(n*p)/g<<endl;
    // cout << (long long)(n * pow(10, k) / __gcd(n, pow(10, k)));





    return 0;

}












