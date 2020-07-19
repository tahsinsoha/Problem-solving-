#include<bits/stdc++.h>
using namespace std;
int main(){

int t,n,i;
map<pair<int,int>,string>mpp;
vector<int>v;
cin>>t;
string s;
int pen,cil;
int slv,penalty;
for(i=1;i<=t;i++){
cin>>n;
for(i=0;i<n;i++){
    cin>>s>>slv>>penalty;
    v.push_back(slv);
    mpp[make_pair(slv,penalty)]=s;
}
sort(v.begin(),v.end());
pen=0;
map<pair<int,int>,string>::iterator it;
for(mpp.begin();it!=mpp.end();it++){
    if(it->first.first==v[v.size()-1]){
          if(it->first.second>pen){
            cil=pen;
          }
    }
}
cout<<mpp[v[v.size()-1],cil]<<endl;

}

return 0;
}
