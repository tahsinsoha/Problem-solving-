#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,tc;
     cin>>t;
    vector<string>v;
    string s,temp;
    int flag;

    for(tc=1;tc<=t;tc++)
    {
        cin>>n;
        v.clear();
        for(int i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
    flag=1;
  //  for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   // cout<<endl;
        for(int i=0; i<n-1; i++)
        {
            if(v[i+1].size()>=v[i].size()){
                 s=v[i+1].substr(0,v[i].size());
                 if(s==v[i]){
                           flag=0;
                           break;
                 }
            }
        }
        if(flag==0) cout<<"Case "<<tc<<": "<<"NO"<<endl;
        else cout<<"Case "<<tc<<": "<<"YES"<<endl;
    }

    return 0;
}
