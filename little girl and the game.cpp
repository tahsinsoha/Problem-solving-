#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
map<char,int>mp;
map<char,int>:: iterator it;

for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int cnt=-1;
for(it= mp.begin();it!=mp.end();it++){
   if( it->second %2) cnt++;

}
if(cnt==-1)  cout<<"First"<<endl;
else if(cnt%2==0) cout<<"First"<<endl;
else cout<<"Second"<<endl;
    return 0;
}










