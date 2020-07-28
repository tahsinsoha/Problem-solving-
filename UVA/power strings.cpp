#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
//cin>>n;
string s;
while(cin>>s && s[0]!='.'){
    // cin>>s;
bool yass=true;
int i;
for( i=1;i<=s.size();i++){
  if(s.size()%i!=0) continue;
  for(int j=i;j<s.size();j++)
  if(s[j]!=s[j%i]){
    yass=false;
    break;
  }
if(yass==1) break;
yass=true;
}
if(yass)cout<<s.size()/i<<endl;
else cout<<s.size()<<endl;

}

return 0;
}
