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
       cin>>n;

       if(n>14 &&  (n%14>=1 && n%14<=6))
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;

    }


    return 0;

}









