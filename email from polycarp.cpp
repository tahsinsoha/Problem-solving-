#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,t;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s>>t;
        int j=0;
        int flag=0;
        if(s.size()>t.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0; i<t.size(); i++)
        {

            if(s[j]==t[i])
            {
                j++;
            }
            else if(t[i]!=s[j-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1 || j!= s.size())
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
