#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,countt=0;
cin>>n>>a>>b;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='.') countt++;
}
if(countt>(a+b)) cout<<(a+b);
else cout<<min(countt,(a+b));
return 0;
}
