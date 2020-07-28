#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int n,a;
    long long int x=0,s=0;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        x=0;
        s=0;
        for(int j=0; j<n; j++)
        {
            cin>>a;
            s+=a;
            x^=a;

        }

        cout<<2<<endl;
        cout<<x<<" "<<s+x<<endl;


    }

    return 0;
}
