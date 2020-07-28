#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    string s;
    cin>>s;

    stack<char>st;

    for(int i=0; i<s.size(); i++)
        st.push(s[i]);

    int n = s.size();
    vector<int>v;
    int f=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
        {
            while(!st.empty())
            {
                if(n<=i+1)
                {
                    f=1;
                    break;
                }

                if(st.top()=='(' && !st.empty())
                {
                    st.pop();
                    n--;

                }
                else if (st.top()==')' && !st.empty())
                {
                    st.pop();
                    v.push_back(i+1);
                    v.push_back(n);
                    n--;
                    break;
                }
            }

            if(f==1)
                break;
        }
    }

    if(v.size()==0)
        cout<<0<<endl;
    else
    {
        cout<<1<<endl;
        cout<<v.size()<<endl;
        sort(v.begin(),v.end());

        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;

    }

    return 0;

}










