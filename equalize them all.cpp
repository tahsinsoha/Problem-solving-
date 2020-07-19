#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int cnt[200007];
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    for(int i=1; i<=n; i++)
        cnt[arr[i]]++;

    int maxx= arr[1];

    for(int i=2; i<=n; i++)
    {
        if(cnt[arr[i]]>cnt[maxx])
        {
            maxx = arr[i];

        }

    }
    int j;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==maxx)
            {
                j=i;
                break;
            }


    }
    int c=0;
    cout<<n-cnt[maxx]<<endl;
   // cout<<j<<endl;
    for(int i=j-1; i>=1; i--)
    {
        if(arr[i]>arr[j])
            cout<<2<<" "<<i<<" "<<i+1<<endl;
        else if(arr[i]<arr[j])
            cout<<1<<" "<<i<<" "<<i+1<<endl;

    }

    for(int i=j+1; i<=n; i++)
    {
        if(arr[i]>arr[j])
            cout<<2<<" "<<i<<" "<<i-1<<endl;
        else if(arr[i]<arr[j])
            cout<<1<<" "<<i<<" "<<i-1<<endl;

    }

    return 0;
}
