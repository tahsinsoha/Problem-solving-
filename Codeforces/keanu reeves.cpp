#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int cont0=0,cont1=0;

for(int i= 0 ;i<s.size();i++){
if(s[i]=='0') cont0++;
else cont1++;

}
if(cont0 == cont1){
    cout<<2<<endl;
    cout<<s[0]<<" ";
for(int i=1;i<s.size();i++) cout<<s[i];
cout<<endl;
}
else {
    cout<<1<<endl;
    cout<<s<<endl;
}
return 0;
}
