#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,string>mapp;
int n,m;
string s1,s2,s3,s4,s5[1000];
cin>>n;
cin>>m;
for(int i=1;i<=n;i++){
cin>>s1;
cin>>s2;
mapp[s2]=s1;

}
for(int i=1;i<=m;i++){
    cin>>s3;
    cin>>s4;
    s4.erase(s4.length()-1,1);
    map<string,string>::iterator it;
    for(it = mapp.begin(); it != mapp.end(); it++) {
        if(s4 == it->first) {
           cout<<s3<<" "<<s4<<";"<<" #"<<it->second<<endl;
           break;
    }
}
}
return 0;
}
