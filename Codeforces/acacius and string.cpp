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

        string t="abacaba";
        string s;
        int n;
        cin>>n;
        cin>>s;
        int sz = s.size();
        int m=-1;
        int cnt=0;
        for(int i=0; i<=sz-7; i++)
        {
            string p = s.substr(i,7);
            //cout<<p<<endl;
            int f=0;
            for(int j=0; j<t.size(); j++)
            {

                if(t[j]!=p[j] )
                {
                    f=1;
                    break;
                }

            }
            if(f==0)
            {
                cnt++;
            }
        }
        if(cnt>1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(cnt==1)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<sz; i++)
            {

                if(s[i]=='?')
                    cout<<'d';
                else
                    cout<<s[i];
            }
            cout<<endl;
            continue;
        }


        for(int i=0; i<=sz-7; i++)
        {
            string p = s.substr(i,7);
            // cout<<p<<endl;
            int f=0;
            for(int j=0; j<t.size(); j++)
            {

                if(t[j]!=p[j] && p[j]!='?')
                {
                    f=1;
                    break;
                }

            }
            if(f==0)
            {
                m=i;

            }
        }

        if(m==-1)
            cout<<"NO"<<endl;

        else
        {


            s[m]='a';
            s[m+1]='b';
            s[m+2]='a';
            s[m+3]='c';
            s[m+4]='a';
            s[m+5]='b';
            s[m+6]='a';
            cnt=0;
            for(int i=0; i<sz; i++)
            {

                if(s[i]=='?')
                    s[i]='d';
            }

            for(int i=0; i<=sz-7; i++)
            {
                string p = s.substr(i,7);
                //cout<<p<<endl;
                int f=0;
                for(int j=0; j<t.size(); j++)
                {

                    if(t[j]!=p[j] )
                    {
                        f=1;
                        break;
                    }

                }
                if(f==0)
                {
                    cnt++;
                }
            }

            if(cnt==1)
            {

                cout<<"YES"<<endl;
                cout<<s<<endl;

            }
            else
                cout<<"NO"<<endl;
        }
    }


    return 0;

}









