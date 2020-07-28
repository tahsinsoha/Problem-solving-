#include<bits/stdc++.h>
using namespace std;
int arr[27];
set<char>s;
int main(){
string s;
cin>>s;
if(s.size()<26) cout<<-1<<endl;
int cont=0;
for(int i=0;i<s.size();i++){
    if(s[i]!='z') s.insert(s[i]);
    if(s[i]=='a') cont++;
}
if(cont<2 )
return 0;
}
