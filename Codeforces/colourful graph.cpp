#include<bits/stdc++.h>.
using namespace std;
int col[100010];
vector<int>v[100010];
set<int>s[100010];
int main(){
int n,m,x,y;
cin>>n>>m;
for(int i=1;i<=n;i++){
    cin>>col[i];
}
for(int i=1;i<=m;i++){
    cin>>x>>y;
    v[x].push_back(y);
     v[y].push_back(x);

}
int ans=-1,p;
for(int i=1;i<=n;i++){
    for(int j=0;j<v[i].size();j++){
        int q= v[i][j];
        if(col[i]!=col[q]){
            s[col[i]].insert(col[q]);
        }
    }
int sz= s[col[i]].size();
if(sz>ans){
    ans=sz;
p=col[i];
}
else if(sz==ans){
p= min(p,col[i]);
}
}
cout<<p<<endl;
return 0;
}
