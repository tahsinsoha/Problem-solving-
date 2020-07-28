#include<bits/stdc++.h>
using namespace std;
int main(){
int n,inp;
cin>>n;
vector<pair<int,int> >v;
for(int i=0;i<n;i++){
cin>>inp;
v.push_back(make_pair(inp,i));
}
sort(v.begin(),v.end());
string s;
int j=0;
cin>>s;
stack<int>st;
for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
        cout<<v[j].second+1<<" ";
        st.push(v[j].second+1);
        j++;
    }
    else {
        cout<<st.top()<<" ";
        st.pop();
    }
}
return 0;
}
