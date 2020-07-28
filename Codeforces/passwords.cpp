#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,contb=0,contw=0;
vector<int>v;
string s,neww;
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>s;
v.push_back(s.size());
}
cin>>neww;
int sz= neww.size();

for(int i=0;i<n;i++){
    if(v[i]<sz) contb++;
    else if (v[i]==sz) contw++;
}
contw=contw+contb;
int ans1 = contb+ (contb/k)*5+1;
int ans2 = contw+ ((contw-1)/k) * 5;
cout<< ans1<<" "<<ans2<<endl;
return 0;
}
