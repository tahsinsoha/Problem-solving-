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

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int f=0;
        for(int i=2; i<=n; i++)
        {
            if(arr[i]>=arr[i-1])
                f=1;
        }

        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



    return 0;

}













