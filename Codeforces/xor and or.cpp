#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    if(s.size()!=t.size())
    {

        cout<<"NO"<<endl;
        return 0;
    }
    int f=0,p=0;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='1')
            f=1;

        if(t[i]=='1')
            p=1;


    }

    if(s.size()==t.size())
    {

        if(f==1 && p==1  || (f==0 && p==0))
            cout<<"YES"<<endl;
        else if(s.size()==1)
        {
            if(s[0]==t[0])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

        else cout<<"NO"<<endl;
    }

    else cout<<"NO"<<endl;

    return 0;
}
