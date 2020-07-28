#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        for(int i=1; i<=n; i++)
            cin>>arr[i];
        map<int,int>mp,mpp;
        int maxx=0;
        pair<int,int>p[n+7];
        for(int i=1; i<=n; i++)
        {

            if(mp[arr[i]])
                break;

            mp[arr[i]]=1;

            maxx=max(maxx, arr[i]);
            //cout<<maxx<<endl;
            if(maxx==i)
                mpp[i]=1;
        }
        mp.clear();
        maxx=0;
        int ans=0;

        for(int i=n; i>=1; i--)
        {

            if(mp[arr[i]])
                break;

            mp[arr[i]]=1;

            maxx=max(maxx, arr[i]);
            //   cout<<maxx<<" "<<mpp[i-1]<<" "<<n-i+1<<endl;
            if(maxx==n-i+1  && mpp[i-1]==1)
            {
                p[ans]= pair<int,int> (i-1,n-i+1);
                ans++;
            }
        }
        cout<<ans<<endl;

        for(int i=0; i<ans; i++)
        {

            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }

    return 0;
}
