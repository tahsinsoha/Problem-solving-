#include<bits/stdc++.h>
using namespace std;
//using namespace std;
vector<int>v[200005];
int r[200005],loc[200005],vis[200005],seq[200005];
int ind=1;
void dfs(int x){
seq[ind++]=x;
loc[x]=ind-1;
for(int i=0;i<v[x].size();i++){
    int w = v[x][i];
    if(!vis[w]){
        vis[w]=1;
        dfs(w);
        r[x]=r[x]+r[w];
    }

}
}
int main(){
int n,q;
cin>>n>>q;
int x;
for(int i=2;i<=n;i++){
    cin>>x;
v[x].push_back(i);
}
for(int i=0;i<=n;i++)
    r[i]=1;
dfs(1);
int u,p;
for(int i=1;i<=q;i++){
    cin>>u>>p;
    if(p>r[u]){
        cout<<-1<<endl;
        continue;
    }
cout<<seq[loc[u]+p-1]<<endl;
}
return 0;
}
