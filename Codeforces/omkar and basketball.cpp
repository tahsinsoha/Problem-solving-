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
        int f=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]!=i)
                f=1;

        }

        if(f==0)
            cout<<0<<endl;
        else
        {


            f=0;
            int cnt=0;
            for(int i=1; i<=n; i++)
            {
                if(arr[i]!=i )
                {
                   if(f==0) cnt++;
                    f=1;
                }
                else
                    f=0;

            }

            if(cnt==1)
                cout<<1<<endl;
            else
                cout<<2<<endl;

        }

    }
    return 0;
}
