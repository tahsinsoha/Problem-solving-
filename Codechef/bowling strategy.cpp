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
        int n,k,l;
        cin>>n>>k>>l;


        map<int,int>mpp;

        for(int i=1; i<=n; i++)
        {
            if(i%k==0)
            {
                mpp[k]++;
                arr[i]=k;

            }

            else
            {
                mpp[i%k]++;
                arr[i]=i%k;

            }

        }
        int f=0;

        for(int i=2;i<=n;i++)
        {
            if(arr[i]==arr[i-1])
                f=1;
        }

        for(int i=1; i<=n; i++)
        {
            if(mpp[i]>l)
            {
                f=1;
                break;
            }

        }

        if(f==1)
            cout<<-1<<endl;

        else
        {

            for(int i=1; i<=n; i++)
                cout<<arr[i]<<" ";

            cout<<endl;
        }
    }


    return 0;

}














