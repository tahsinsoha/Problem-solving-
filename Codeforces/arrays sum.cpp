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
        int n,k;
        cin>>n>>k;
        set<int>st;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);

        }

        int sz = st.size();


        if(k==1)
        {
            if(sz==1)
                cout<<1<<endl;

            else
            {

                cout<<-1<<endl;

            }
            continue;

        }

        else
        {
            int ans=1;
            sz-=k;


            cout<<ans+max(0,((sz+k-2)/(k-1)))<<endl;
        }


    }


    return 0;

}












