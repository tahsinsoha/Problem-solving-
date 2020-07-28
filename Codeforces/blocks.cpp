#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int sz = s.size();
    int f=0;
    vector<int>v;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]!=s[i+1])
            f=1;
    }
    if(f==0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0; i<s.size()-1; i++)
    {

        if(s[i]=='W')
        {
            s[i]='B';
            if(s[i+1]=='W')
                s[i+1]='B';
            else
                s[i+1]='W';

            v.push_back(i+1);
        }
    }
    //cout<<s<<endl;

    if(s[sz-1]=='B')
    {
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";

        cout<<endl;
        return 0;

    }
    for(int i=n-2; i>=1; i--)
    {
        // cout<<1<<endl;


        if(s[i]=='B')
        {

            s[i]='W';
            if(s[i-1]=='B')
                s[i-1]='W';
            else
                s[i-1]='B';

            v.push_back(i);

            //cout<<1<<endl;
        }
    }
    // cout<<s<<endl;
    if(s[0]=='W')
    {
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";


        cout<<endl;
        return 0;

    }

    cout<<-1<<endl;

    return 0;

}











