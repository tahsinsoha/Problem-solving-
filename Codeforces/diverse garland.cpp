#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s;
cin>>n;
cin>>s;
int cont=0;
vector<int >v;
for(int i=0;i<s.size()-1;i++){
    if(s[i]==s[i+1]) {
        v.push_back(i+1);
            i++,cont++;}
}

cout<<cont<<endl;
//for(int i=0;i<v.size();i++) cout<<v[i];
//cout<<endl;
for(int i=0;i<v.size();i++){
    if(s[v[i]-1]=='R'&&s[v[i]+1]=='R') s[v[i]]='G';
    else if (s[v[i]-1]=='B'&&s[v[i]+1]=='B') s[v[i]]='R';
    else if (s[v[i]-1]=='G'&&s[v[i]+1]=='G') s[v[i]]='B';
    else if ((s[v[i]-1]=='G'&&s[v[i]+1]=='R')||(s[v[i]-1]=='R'&&s[v[i]+1]=='G')) s[v[i]]='B';
     else if ((s[v[i]-1]=='R'&&s[v[i]+1]=='B')||(s[v[i]-1]=='B'&&s[v[i]+1]=='R')) s[v[i]]='G';
      else if ((s[v[i]-1]=='B'&&s[v[i]+1]=='G')||(s[v[i]-1]=='G'&&s[v[i]+1]=='B')) s[v[i]]='R';
      else if(s[v[i]-1]=='B') s[v[i]]='R';
      else if(s[v[i]-1]=='R') s[v[i]]='G';
       else if(s[v[i]-1]=='G') s[v[i]]='B';
}
for(int i=0;i<s.size();i++) cout<<s[i];
cout<<endl;
return 0;
}

