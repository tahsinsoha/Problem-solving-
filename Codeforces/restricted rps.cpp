#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,c;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>n;
        cin>>a>>b>>c;
        cin>>s;
        string s1(s.size(),0);
        int cnt=0;
        for(int i=0; i<=s.size(); i++)
        {

            if(s[i]=='R' && b)
                b--,cnt++,s1[i]='P';
            if(s[i]=='P' && c)
                c--,cnt++,s1[i]='S';

            if(s[i]=='S' && a)
                a--,cnt++, s1[i]='R';

        }
   //     cout<<s1<<endl;
    //    cout<<a<<b<<c<<endl;
        if(cnt<(n+1)/2)
            cout<<"NO"<<endl;

        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s1[i]==0)
                {
                    if(a)
                        a--,s1[i]='R';
                    else if(b)
                        b--,s1[i]='P';
                    else if(c)
                        c--,s1[i]='S';
                }

            }
            cout<<"YES"<<endl;
            cout<<s1<<endl;

        }


    }
return 0;
}
