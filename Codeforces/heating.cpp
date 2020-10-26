#include<bits/stdc++.h>
#define ll long long
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
       int c,sum;

       cin>>c>>sum;

       int div = sum/c;

       int rem = sum%c;

       cout<<(c-rem)*div*div+rem*(div+1)*(div+1)<<endl;
    }


    return 0;

}













