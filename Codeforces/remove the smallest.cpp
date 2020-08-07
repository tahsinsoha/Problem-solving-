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
        sort(arr+1,arr+1+n);
        int f=0;

        for(int i=2; i<=n; i++)
        {
            if(abs(arr[i]-arr[i-1])>1)
            {
                f=1;
                break;
            }


        }

        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }



    return 0;

}













