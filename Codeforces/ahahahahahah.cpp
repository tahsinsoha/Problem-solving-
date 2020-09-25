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

        int n;
        cin>>n;
        int zer=0,one=0;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                zer++;
            else
                one++;

        }

        if(zer>=n/2)
        {
            cout<<n/2<<endl;
            for(int i=1; i<=n/2; i++)
                cout<<0<<" ";
            cout<<endl;
        }

        else if(one>n/2)
        {
            int z=0;
            if((n/2)%2)
                z=1;
            cout<<n/2+z<<endl;
            for(int i=1; i<=n/2+z; i++)
                cout<<1<<" ";
            cout<<endl;
        }
    }


    return 0;

}









