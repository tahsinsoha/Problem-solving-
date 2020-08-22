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
        int ans=0;
        int x;
        set<int>st;

        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(x%2==0)
                st.insert(x);


        }

        while(!st.empty())
        {
            int m = *st.rbegin();
            st.erase(m);

            if(m%2==0)
            {
                ans++;
                st.insert(m/2);
            }
        }

        cout<<ans<<endl;
    }


    return 0;

}










