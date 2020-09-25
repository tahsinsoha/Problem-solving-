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

        int f=0;
        long long sum=0;
        int pos=0;


        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
            {

                f=1;
                sum+=arr[i];
                pos++;

            }

        }
        sort(arr+1,arr+1+n);
        reverse(arr+1,arr+1+n);

        if(f==0)
        {
            cout<<0<<endl;
            cout<<0<<endl;
        }

        else
        {

            cout<<sum<<endl;
            cout<<pos<<" ";

            for(int i=1; i<=n; i++)
            {
                if(arr[i]>0)
                    cout<<arr[i]<<" ";

            }
            cout<<endl;


        }
    }


    return 0;

}













