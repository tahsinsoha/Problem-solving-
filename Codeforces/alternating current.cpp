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
    {
        if(st.empty())
            st.push(s[i]);
        else
        {

            if(st.top()==s[i])
                st.pop();
            else
                st.push(s[i]);
        }
    }
    if(st.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}













