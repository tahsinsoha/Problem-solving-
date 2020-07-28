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
        long long x;
        cin>>x;
        stack<long long>st;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];


        }

        sort(arr+1,arr+1+n);

        for(int i=1; i<=n; i++)
        {

            st.push(arr[i]);
        }
        long long cnt=0;
        long long minn =INT_MAX;
        long long ans=0;

        while(!st.empty())
        {

            if(cnt==0)
                minn= INT_MAX;

            long long p = st.top();
            cnt++;
            minn=min(p,minn);

            if(minn*cnt>=x)
                ans++,cnt=0;

            st.pop();



        }

        cout<<ans<<endl;
    }
    return 0;
}


