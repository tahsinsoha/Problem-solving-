#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long  n;
    cin>>n;

    long long r = n/2;

    long long facn=1, facr=1,facrn=1,facro=1;


    for(int i=1; i<=n; i++)
    {
        facn*=i;
    }

    for(int i=1; i<=r; i++)
    {
        facr*=i;
    }

    for(int i=1; i<=r-1; i++)
    {
        facro*=i;
    }

    for(int i=1; i<=n-r; i++)
    {
        facrn*=i;
    }


    long long ans = (facn)/(facr*facrn);

    cout<<(ans*facro*facro)/2<<endl;





    return 0;

}













