#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
vector<int>v;
int i,x;
cin>>s;
for(i=0;i<s.size();i++){
    if(s[i]=='+'){
        continue;
    }
    else {
 x=s[i]-'0';
 //cout<<x;
        v.push_back(x);
    }
}
sort(v.begin(),v.end());


cout<<v[0];
for(i=1;i<v.size();i++){
    cout<<"+";
    cout<<v[i];

}



return 0;
}
