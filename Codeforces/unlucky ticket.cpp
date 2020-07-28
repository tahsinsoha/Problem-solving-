#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=0,g=0;
    cin>>n;
string s;
cin>>s;
sort(s.begin(),s.begin()+n);
sort(s.begin()+n,s.begin()+2*n);
for(int i=0;i<n;i++){
    if(s[i]<s[i+n])f++;
    else if(s[i]>s[i+n]) g++;
}
if(f==n||g==n) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
