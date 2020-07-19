#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t,p;
int tc;
cin>>tc;
while(tc--){
    cin>>s>>t>>p;
    int flag=0;
    //for(int i=0;i<s.size();i++){
      //  if(s[0]!=t[0]){
           //  cout<<"NO"<<endl;
        // continue;
       // }
if(s.size()>t.size()){
    cout<<"NO"<<endl;
    continue;
}
        for(int i=0;i<s.size();i++){
            if(t.find(s[i]) != std::string::npos) {
                for(int j=0;j<t.size();j++){
                    if(s[i]==t[j]) {
                    t.erase(t.begin()+j);
                    break;
                    }

                }
            }
            else {
                flag=1;
                break;
            }
        }
    //}
   if(flag==1) {
        cout<<"NO"<<endl;
    continue;
    }
map<char,int>mp1;
map<char,int>mp2;
//cout<<s<<" "<<t<<" "<<p<<endl;

for(int i = 0;i<t.size();i++){
    mp1[t[i]]++;
}
for(int j=0;j<p.size();j++){
    mp2[p[j]]++;
}
int neww=0;
for(int i = 0;i<t.size();i++){
    if(mp2[t[i]]>=mp1[t[i]]) continue;
    else {
        neww=1;
        break;
    }

}
if(neww==1) {
    cout<<"NO"<<endl;
}
else if(neww==0 && flag==0){
    cout<<"YES"<<endl;
}
}

return 0;
}
