#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int n;
    cin>>n;
    set<int>st;
    for(int i=0; i<=n; i++)
        st.insert(i);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        st.erase(arr[i]);

    }

    vector<int>v;

    v.push_back((*st.begin()));
    st.erase(v[0]);

    for(int i=2; i<=n; i++)
    {
        if(arr[i]!=arr[i-1])
            st.insert(arr[i-1]);

        v.push_back((*st.begin()));
        st.erase((*st.begin()));

    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    cout<<endl;


    return 0;
}














