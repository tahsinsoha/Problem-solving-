#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i,flag,p;
string s;
cin>>n;
for(i=1;i<=n;i++){
        stringstream ss;
ss<<i;
ss>>s;
//cout<<s;
for(p=0;p<s.size();p++){
    if(s[p]!='7'&&s[p]!='4'){
            flag=1;
        break;}
        else flag=0;
}
if(flag==0){
      if(n%i==0){
           // cout<<"YES"<<endl;
            break;
      }
}


}
if(flag==1) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
return 0;
}
