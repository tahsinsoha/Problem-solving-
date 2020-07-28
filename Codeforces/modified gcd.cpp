#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,l,r;
cin>>a>>b;
int q;
cin>>q;
vector<int>v;
int mn = min(a,b);
for(int i=1;i*i<=mn;i++){
    if(a%i==0 && b%i==0) v.push_back(i);

      if(a%i==0 && b%(a/i)==0) v.push_back(a/i);
if(b%i==0 && a%(b/i)==0) v.push_back(b/i);

}
sort(v.begin(),v.end());
for(int i=1;i<=q;i++){
    cin>>l>>r;
    int pos1 = upper_bound(v.begin(),v.end(),r)-v.begin();
    int pos = pos1-1;
    if(v[pos]>=l && v[pos]<=r) cout<<v[pos]<<endl;
    else cout<<-1<<endl;
}

return 0;
}
