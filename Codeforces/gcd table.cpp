#include<bits/stdc++.h>
using namespace std;
multiset<int, greater<int>>st;
multiset<int, greater<int>> :: iterator it;
vector<int>v;
int main()
{
    int n,a;
    cin>>n;
    for(int i=0; i<n*n; i++)
    {
        cin>>a;
        st.insert(a);
    }
    if(n==1)
        return cout<<*(st.begin())<<endl,0;
    int x = (*st.begin());
    v.push_back(x);
    st.erase(st.find(x));
    int y = (*(st.begin()));
    v.push_back(y);
    st.erase(st.find(y));
    st.erase(st.find(__gcd(x,y)));
    st.erase(st.find(__gcd(x,y)));

    while(!st.empty())
    {
        int p;
        for(auto x:st)
        {
            p=x;
            st.erase(st.find(p));
            break;
        }
        for(int i=0; i<v.size(); i++)
        {
            st.erase(st.find(__gcd(v[i],p)));
            st.erase(st.find(__gcd(v[i],p)));
        }
        v.push_back(p);

    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
