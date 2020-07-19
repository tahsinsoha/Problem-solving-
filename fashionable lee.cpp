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

        string s,t,p;
        cin>>s>>t>>p;
        map<int,int>sc,tc,pc;

        for(int i=0; i<s.size(); i++ )
            sc[s[i]-'a']++;
        for(int i=0; i<t.size(); i++ )
            tc[t[i]-'a']++;
        for(int i=0; i<p.size(); i++ )
            pc[p[i]-'a']++;
        int sz = t.size();
        int x=0;
        int f=0;
        for(int i=0; s[i]; i++)
        {

            while(x<sz && t[x]!=s[i])
                x++;

            if(x==sz)
            {
                f=1;
                break;

            }
            x++;
        }

        for(int i=0; i<26; i++)
        {

            if( sc[i]+pc[i]<tc[i])
            {
                f=1;
                break;

            }
        }

        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }


    return 0;

}








