#include<bits/stdc++.h>
using namespace std;
long long cost[100005],mx;
vector<int>v[100005];
bool visited[100005];
void dfs(int u){
visited[u]=1;
mx=min(mx,cost[u]);
for(int i=0;i<v[u].size();i++){
    int w = v[u][i];
    if(!visited[w]){
        visited[w]=1;
        dfs(w);
    }
}

}
int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++)
    cin>>cost[i];
    int x,y;
for(int i=0;i<m;i++){
cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);
}
long long ans=0;
for(int i=1;i<=n;i++){
    if(visited[i]) continue;
    mx=1e+10;
dfs(i);
//cout<<i<<" "<<mx<<endl;

ans=ans+mx;
}
cout<<ans<<endl;
return 0;
}
