#include<bits/stdc++.h>
using namespace std;
vector<long long>graph[200010];
int vis[200010];
int temp;
void dfs(long long i){
vis[i]=1;
if(graph[i].size()!=2) temp=0;
for(long long k=0;k<graph[i].size();k++){
    long long  v= graph[i][k];
    if(!vis[v]){
        dfs(v);
    }
}

}
int main(){
long long  n,m,a,b;
cin>>n>>m;
for(long long i=1;i<=m;i++){
    cin>>a>>b;
    a--,b--;
      graph[a].push_back(b);
      graph[b].push_back(a);
}
long long  ans=0;

for(long long i=0;i<n;i++){
    if(!vis[i]){
         temp=1;
         dfs(i);
         ans = ans+temp;
    }
}
cout<<ans<<endl;

return 0;
}
