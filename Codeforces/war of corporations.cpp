#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    int sz=s1.size();
    int cont=0;
    //cout<<sz;
    if(s1.size()>s.size()){
        cout<<0<<endl;
        return 0;

    }
    for(int i=0; i<=(s.size()-s1.size()); i++)
    {

        if(s.substr(i,sz)==s1&&s.substr(i+sz-1,sz)==s1)
        {
            cont++;
           // cout<<1<<" ";
            i=i+sz-1;
        }


       else  if(s.substr(i,sz)==s1)
        {
            cont++;
            //cout<<2<<" ";
            i=i+sz-1;
        }
        else
            continue;
    }
    cout<<cont<<endl;
    return 0;
}
