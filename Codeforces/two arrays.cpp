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
        int n,t;
        cin>>n>>t;
        map<int,int>vis;

        map<int,int>ans;
        int cnt=0;

        int f=0;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];

            if(t%2==0 && arr[i]==t/2)
                cnt++;

            if(arr[i]<=t/2)
                f=1;


        }

        if(f==0)
        {
            cout<<1<<" ";

            for(int i=1; i<=n-1; i++)
                cout<<0<<" ";

            cout<<endl;
            continue;
        }

        cnt=cnt/2;

        if(cnt)
        {
            for(int i=1; i<=n; i++)
            {
                if(arr[i]==t/2)
                {
                    if(cnt)
                    {
                        cout<<1<<" ";
                        cnt--;
                    }

                    else
                        cout<<0<<" ";

                }

                else if(arr[i]<t/2)
                    cout<<1<<" ";

                else
                    cout<<0<<" ";
            }

            continue;
        }

        for(int i=1; i<=n; i++)
        {
            if(arr[i]<=t/2)
                cout<<1<<" ";

            else
                cout<<0<<" ";
        }

        cout<<endl;






    }


    return 0;

}













