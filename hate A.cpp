#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int pos = -1;
    int cont=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
            cont++;
        if(2*(i+1)-cont== s.size())
        {
            pos= i;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<":("<<endl;
        return 0;
    }
    int cur=0;
    for(int j= pos+1; j<s.size(); j++)
    {
        if(s[j]=='a')
        {
            cout<<":("<<endl;
            return 0;
        }
        while(s[cur]=='a')
            cur++;
        if(s[cur]!=s[j])
        {
            cout<<":("<<endl;
            return 0;
        }
        cur++;
    }
    cout<<s.substr(0,pos+1)<<endl;
    return 0;
}
