#include<bits/stdc++.h>
using namespace std;
int main(){
string s,y;
cin>>s>>y;
int flag=1;
if(s.size()!=y.size()) {
    cout<<"No"<<endl;
    return 0;
}
for(int i=0;i<s.size();i++){
    if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(y[i]!='a'&&y[i]!='e'&&y[i]!='i'&&y[i]!='o'&&y[i]!='u')){
        flag=0;
        //cout<<'f'<<endl;
        break;
    }
    else if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(y[i]=='a'||y[i]=='e'||y[i]=='i'||y[i]=='o'||y[i]=='u')){
        flag=0;
      // cout<<'s'<<endl;
        break;
    }
}
if(flag==0) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
return 0;
}
