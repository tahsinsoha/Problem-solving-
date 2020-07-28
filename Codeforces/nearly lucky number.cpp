#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int l=s.size();
int i,sum=0,flag=0;
string j;
for(i=0;i<l;i++){
if(s[i]=='4'||s[i]=='7') sum++;
}
stringstream ss;
ss<<sum;
ss>>j;
for(i=0;i<j.size();i++){
if(j[i]!='4'&&j[i]!='7'){
    flag=1;
    break;
}
}
if(flag==1){cout<<"NO"<<endl;}
else cout<<"YES";
return 0;
}
