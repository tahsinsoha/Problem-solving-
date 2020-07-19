#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int cnt=0;
    cin>>s>>t;
    string s1="";
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]!=t[i])
        {
            cnt++;
            if(cnt%2)
                s1+=s[i];
            else
                s1+=t[i];

        }
        else
        {
            s1+=s[i];
        }
    }
  //  cout<<cnt<<endl;
    if(cnt%2)
    {
        cout<<"impossible"<<endl;
        return 0;
    }

    else
    {
        cout<<s1<<endl;


    }

    return 0;
}
