#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,a;
    cin>>n;
    long long  arr[n+5];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long g = arr[0];
    for(int i=1; i<n; i++)
        g= __gcd(g,arr[i]);
    //    cout<<g<<endl;
    int cont =0;
    for(long long  i=1; i*1ll*i<=g; i++)
    {
        if(g%i==0)
        {
            if((g/i)==i)
                cont++;
           else
               cont+=2;
        }
       // cout<<cont<<endl;
    }
    cout<<cont<<endl;
}
