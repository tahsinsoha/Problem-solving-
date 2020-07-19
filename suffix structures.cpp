#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;

    cin>>s>>t;
    int k=0;
    for(int i=0; i<s.size(); i++)
    {
        if(k==t.size())
            break;
        if(s[i]==t[k])
            k++;
    }
 //   cout<<k<<endl;
    if(k==t.size())
    {

        return cout<<"automaton"<<endl,0;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t)
    {
       // cout<<"array"<<endl;
        return cout<<"array"<<endl,0;
    }
    k=0;
    for(int i=0; i<s.size(); i++)
    {
        if(k==t.size())
            break;
        if(s[i]==t[k])
            k++;
    }
    if(k==t.size())
    {

        return cout<<"both"<<endl,0;
    }

    else
        cout<<"need tree"<<endl;

    return 0;
}
