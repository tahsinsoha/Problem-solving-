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
        set<int>st;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];

        }
         for(int i=1; i<=n; i++)
        {
            st.insert(i);

        }

        int flag=0;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]>arr[i-1])
                cs[i]=arr[i];

            else
            {
                cs[i]=(*st.begin());
            }

            if(st.find(cs[i])==st.end() || cs[i]>arr[i])
            {
                flag=1;
                cout<<-1<<endl;
                break;

            }
            //cout<<cs[i]<<endl;
            st.erase(cs[i]);
        }

        if(flag==1)
            continue;

        for(int i=1; i<=n; i++)
            cout<<cs[i]<<" ";
        cout<<endl;



    }

    return 0;

}












