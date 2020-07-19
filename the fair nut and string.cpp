#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
string s;
cin>>s;
long long a=0,b=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='b') b = a;
    if(s[i]=='a') a = (a+b+1)%mod;
}
cout<<a%mod<<endl;
return 0;
}
