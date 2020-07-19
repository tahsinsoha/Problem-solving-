#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int len = s.size();
int cont =0;
for(int i=0;i<s.size();i++)
    if(s[i]=='a') cont++;

    if(cont> len/2) cout<<len<<endl;
    else cout<<cont*2-1<<endl;

return 0;
}
