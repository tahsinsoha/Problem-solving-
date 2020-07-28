#include<bits/stdc++.h>
using namespace std;

int main(){
set<char>s;
string st;
int len,i;
char c;
cin>>st;
for(i=0;i<st.size();i++){
    s.insert(st[i]);
}

len=s.size();
if(len%2==0){cout<<"CHAT WITH HER!"<<endl;}
else cout<<"IGNORE HIM!"<<endl;

return 0 ;
}
