#include<bits/stdc++.h>
using namespace std;
vector<int>graph[500010];
int vis[50010],ans[500010],cont=0,temp;
bool onno[50010];
void dfs(int i){
   onno[i]=1;
  // vis[i]=temp;
   for(int j=0;j<graph[i].size();j++){
    int v = graph[i][j];
    if(!onno[v]){
       // onno[v]=1;
        vis[v]=temp;
        cont++;
       // cout<<v<<" ";
        dfs(v);
    }
   }
}
int main(){
    int n,m,k,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
            cin>>k;
            //cin>>a;
            for(int j=1;j<=k;j++){
                cin>>b;
                if(j==1){temp=b;}
                else {
                    graph[temp].push_back(b);
                    graph[b].push_back(temp);
                }
               //cout<<b<<endl;
            }
    }
            //for(int i=1;i<=n;i++){
            // for(int j=0;j<graph[i].size();j++){
                   // cout<<graph[i][j]<<" ";
               // }
               // cout<<endl;
           // }


            for(int i=1;i<=n;i++){
                    cont=0;
                    temp=i;
                 if(!onno[i]){
                        vis[i]=i;
                    dfs(i);
                    ans[i]=cont;
                 }
            }

           // for(int i=1;i<=n;i++){
               // cout<<ans[i]<<" "<<vis[i]<<" "<<onno[i]<<endl;
           // }
          //  cout<<endl;
            for(int i=1;i<=n;i++){
                cout<<ans[vis[i]]+1<<" ";
            }
            cout<<endl;
return 0;
}
