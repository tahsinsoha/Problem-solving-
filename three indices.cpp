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
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];

        }
        int f=0;

        for(int i=2; i<=n-1; i++)
        {

            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<" "<<i+1<<endl;
                f=1;
                break;

            }
        }

        if(f==0)
            cout<<"NO"<<endl;

    }
    return 0;
}

