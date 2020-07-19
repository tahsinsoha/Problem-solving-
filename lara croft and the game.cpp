#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;

    if(k<n)
    {
        cout<<k+1<<" "<<1<<endl;
        return 0;
    }
    k-=n;
    long long r = (k)/(m-1);
    cout<<n-r<<" ";
    if(r%2) cout<<(m-k%(m-1))<<endl;
    else cout<<k%(m-1)+2<<endl;


    return 0;
}














