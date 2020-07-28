#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
string t;
set<char>st,tt;
set<char> :: iterator it,it2;
int q;
cin>>q;
int flag ;
while(q--){
    cin>>s;
    cin>>t;
    flag=0;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
     for(int i=0;i<t.size();i++){
        tt.insert(t[i]);
    }
     for(int i=0;i<s.size();i++){
            it = st.find(s[i]);
     it2  = tt.find(s[i]);

    if((it!= st.end() )&& (it2!=tt.end())){
        flag=1;
        break;
    }
    }
    if(flag==1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    st.clear();
    tt.clear();
}

return 0;
}
