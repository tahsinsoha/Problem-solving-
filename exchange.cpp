#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
string s;
int val;
char c,d;
cin>>n;
for(i=1;i<=n;i++){
cin>>s;
d=s[0];
c='z';
for(j=0;j<s.size();j++){
if(s[j]<c){
    c=s[j];

}
}
replace( s.begin(), s.end(), d, c);
replace( s.begin(), s.end(), c, d);
cout<<s<<endl;

}

return 0;
}
