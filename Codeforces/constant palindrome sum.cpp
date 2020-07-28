#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int p[400007];
int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n,k;

        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        for(int i=1; i<=2*k; i++)
            p[i]=0;
        map<int,int>mpp;
        for(int i=1; i<=n/2; i++)
        {

            int l = min(arr[i],arr[n-i+1]);
            int r = max(arr[i],arr[n-i+1]);
            mpp[l+r]++;
            p[l+1]++;
            p[r+k+1]--;
        }

        int sum=0;
        for(int i=2; i<=2*k; i++)
        {
            sum+=p[i];
            p[i]=sum;
        }

        int minn = n;

        for(int i=2; i<=2*k; i++)
        {
            int cnt0= mpp[i];
            int cnt1 = p[i]-mpp[i];
            int cnt2 = n/2 - (cnt1)-cnt0;

            int cnt = cnt1 + cnt2*2;

            minn= min(cnt,minn);

        }

        cout<<minn<<endl;

    }

    return 0;
}

