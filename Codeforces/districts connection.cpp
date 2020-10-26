#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1000007];
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
        for(int i=2; i<=n; i++)
        {
            if(arr[i]!=arr[i-1])
                f=1;

        }
        if(f==0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        int p=-1;


        for(int i=2;i<=n;i++)
        {
            if(arr[i]!=arr[1])
            {
                p=i;
                break;
            }

        }

        cout<<"YES"<<endl;

        for(int i=2;i<=n;i++)
        {
            if(arr[i]!=arr[1])
                cout<<1<<" "<<i<<endl;

            else
                cout<<p<<" "<<i<<endl;
        }
    }

    return 0;

}















