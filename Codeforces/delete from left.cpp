#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s;
cin>>t;
int sz = s.size();
int tz = t.size();
 reverse(s.begin(),s.end());
 reverse (t.begin(),t.end());

int diff =min(sz,tz);

int cont = 0;
for(int i=0;i<diff;i++){


    if(s[i]==t[i]){
        cont++;
    }
    if(s[i]!=t[i]){
        break;
    }
}
cout<<sz-cont+tz-cont<<endl;
return 0;
}
