#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int i,flag=0;
cin>>s;
for(i=0;i<s.size();i++){
if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
    cout<<"YES"<<endl;
    flag=1;
    break;
}

}
if(flag==0)cout<<"NO"<<endl;

return 0;
}


