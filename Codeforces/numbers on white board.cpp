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
        int n;
        cin>>n;

        cout<<2<<endl;

        int p = n;

        for(int i=n-1; i>=1; i--)
        {

            cout<<p<<" "<<i<<endl;

            p=(p+i+1)/2;


        }
    }

    return 0;

}














