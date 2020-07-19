#include<bits/stdc++.h>
using namespace std;
//int n;
//string s;
int main(){
int n;
string s;
cin>>n>>s;
string fin = "";
int cont1= (n-11)/2;
int cont2= cont1;
//cin>>n>>s;
for(int i=0;i<n;i++){
    if(s[i]=='8'){
        if(cont1>0) cont1--;
        else fin= fin+s[i];
    }
    else {
        if(cont2>0) cont2--;
        else fin=fin+s[i];
    }
}
if(fin[0]=='8') cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
