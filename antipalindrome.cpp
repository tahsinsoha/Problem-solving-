#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string s1=s;
 reverse(s.begin(),s.end());
if(s1!=s){
    cout<<s.size();
    return 0;
}

else if(s==string(s.length(),s[0])){
    cout<<0<<endl;
    return 0;
}
else cout<< s.length()-1<<endl;


//cout<<0<<endl;


return 0;
}
