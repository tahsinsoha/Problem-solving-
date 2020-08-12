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
        int n;
        cin>>n;

        set<int>st;
        st.insert(0);
        for(int i=1; i*i<=n; i++)
        {
            st.insert(i);
            st.insert(n/i);
        }
        cout<<st.size()<<endl;
        for(auto x:st)
        {
            cout<<x<<" ";
        }
        cout<<endl;


    }



    return 0;

}











