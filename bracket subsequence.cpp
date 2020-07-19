#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==k)
    {

        cout<<s<<endl;
        return 0;

    }
    k=k/2;

    stack<char>st;
    vector<char>v;
    for(int i=0; i<s.size(); i++)
    {
        // if(k==0 ) break;

        if(s[i]=='('  && k)
        {
            st.push(s[i]);
            k--;
            v.push_back(s[i]);
            //cout<<s[i]<<endl;
        }

        else if(s[i]==')' && !st.empty())
        {

            st.pop();
            v.push_back(s[i]);
            //cout<<s[i]<<endl;
        }

        else
            continue;
    }
    // cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i];

    cout<<endl;

    return 0;
}










