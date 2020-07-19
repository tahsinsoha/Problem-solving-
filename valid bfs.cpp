#include<bits/stdc++.h>
using namespace std;
int pos[1000000];
int l[1000000];
vector<int>v[1000000];
bool vis[1000000];
bool cmp(const int &a, const int &b){
return pos[a]<pos[b];
}
int main(){
int n,x,y,a;
vector<int>seq;
vector<int>bfs;
cin>>n;
for(int i=1;i<n;i++){
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);


}
for(int i=1;i<=n;i++){
    cin>>a;
     seq.push_back(a);
pos[a]=i;
}

for(int i=1;i<=n;i++){
    sort(v[i].begin(),v[i].end(),cmp);
}
queue<int>q;
q.push(1);
vis[1]=1;
while(!q.empty()){
    int u= q.front();
bfs.push_back(u);
q.pop();
for(int i=0;i<v[u].size();i++){
        int w = v[u][i];
    if(!vis[w]){
        vis[w]=1;
        l[w]=l[u]+1;
        q.push(w);
    }
}


}
int flag=0;
if(seq[0]!=1){
    cout<<"No"<<endl;
    return 0;
}
for(int i=0;i<n;i++){
    if(seq[i]!=bfs[i])
    {

        flag=1;
        break;
    }
}
if(flag) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
return 0;
}
