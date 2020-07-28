#include<bits/stdc++.h>
using namespace std;
long long arr[200007];

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long res=0;

        while(n)
        {

            res+=n;
            n/=2;
        }

        cout<<res<<endl;
    }
    return 0;
}














