#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
string s;
cin>>t;
while(t--){
cin>>s;
stack<char>st;
for(int i=0;i<s.size();i++){
    if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'||s[i]=='%') st.push(s[i]);
    else if(s[i]==')'){
        cout<<st.top();
        st.pop();
    }
    else if (s[i]=='(') continue;
    else cout<<s[i];

}

cout<<endl;

}




return 0;
}
