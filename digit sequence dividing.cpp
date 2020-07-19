#include<bits/stdc++.h>
using namespace std;
int main(){
int t,sz,i,j;
string s;
cin>>t;
for( j=1;j<=t;j++){
    cin>>sz;
    cin>>s;
    if(s.size()==2&&((s[0]==s[1])||(s[0]>s[1]))){
        cout<<"NO"<<endl;

    }
    else {
            cout<<"YES"<<endl;
            cout<<2<<endl;
        cout<<s[0]<<' ';
        for( i=1;i<s.size();i++) {
            cout<<s[i];
        }
        cout<<endl;
    }
}

return 0;
}
