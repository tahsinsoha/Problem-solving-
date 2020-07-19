#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
int l,r;
cin>>l>>r;
//string s;
set<char>st;
int flag  =0;
for(int i=l;i<=r;i++){
stringstream strg;
//strg<< num;
strg<<i;
string s = strg.str();
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
       // cout<<s[i]<<endl;
    }
    if(st.size()==s.size()) {
          //  flag=1;
       //   cout<<st.size()<<" "<<s.size()<<endl;
        cout<<s<<endl;

return 0;
    }
    st.clear();

}
cout<<-1<<endl;

return 0;
}
