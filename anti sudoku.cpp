#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int n,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
cin>>n;
cin>>s;
for(int i=0;i<s.size();i=i+3){
    if(s[i]=='R') s1++;
    else if(s[i]=='G') s2++;
    else s3++;
}
for(int j=1;j<s.size();j=j+3){
 if(s[j]=='R') s4++;
    else if(s[j]=='G') s5++;
    else s6++;
}
for(int j=2;j<s.size();j=j+3){
 if(s[j]=='R') s7++;
    else if(s[j]=='G') s8++;
    else s9++;
}

return 0;
}
