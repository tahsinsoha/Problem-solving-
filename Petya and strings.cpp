#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;
int i,flag=0,len;
cin>>s1>>s2;

transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
for(i=0;i<s1.size();i++){
    if(s1[i]==s2[i]){
        continue;
    }
else if(s1[i]<s2[i]){
        flag=1;
cout<<"-1"<<endl;
break;
}
else if(s1[i]>s2[i]){
    flag=1;
    cout<<"1"<<endl;
    break;
}
}
if(flag==0) cout<<"0"<<endl;
return 0;
}
