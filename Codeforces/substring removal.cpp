#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s;
cin>>n>>s;
long long int a=0,b=0;
for(int i=0;i<s.size();i++)
{
if (s[i]==s[0]) a++;
else break;

}
string p;
p=s;
reverse(p.begin(),p.end());
for(int i=0;i<p.size();i++){
    if(p[i]==p[0]) b++;
    else break;
}
//cout<<a<<" "<<b<<endl;
if(s[0]==p[0]) cout<<((a+1)*(b+1))%998244353<<endl;
else cout<<(a+b+1)%998244353<<endl;
return 0;
}
