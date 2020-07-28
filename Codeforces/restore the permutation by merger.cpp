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
        for(int i=1; i<=2*n; i++)
            cin>>arr[i];

        set<int>st;
        vector<int>v;
        for(int i=1; i<=2*n; i++)
        {

            if(!st.count(arr[i]))
                v.push_back(arr[i]);
            st.insert(arr[i]);
        }

        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";

        cout<<endl;

    }


    return 0;

}









