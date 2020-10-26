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
        int maxx=INT_MIN;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            maxx=max(arr[i],maxx);

        }

        int f=0;
        for(int i=2; i<=n; i++)
        {
            if(arr[i]!=arr[i-1])
                f=1;

        }
        if(f==0)
        {
            cout<<-1<<endl;
            continue;
        }

        int p=0;

        if(arr[1]==maxx && arr[2]<arr[1])
        {
            cout<<1<<endl;
            continue;

        }
        if(arr[n]==maxx && arr[n-1]<arr[n])
        {
            cout<<n<<endl;
            continue;

        }



        int ans=-1;



        for(int i=2; i<=n-1; i++)
        {
            if(arr[i]==maxx && (arr[i]>arr[i-1] || arr[i]>arr[i+1]))
            {
                p=1;
                ans=i;
                break;

            }

        }

        if(p==0)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }


    return 0;

}














