#include<bits/stdc++.h>
#define mx 200009
using namespace std;
bool vis[mx];
int ans[mx];
vector<int>v[mx];
int dfs(int i, int days)
{
    if(vis[i])
        return days;
    vis[i]=1;
    for(int j=0; j<v[i].size();j++)
    {
        int node = v[i][j];
        ans[i]=dfs(node,days+1);
    }
    return ans[i];
}

int main()
{
    int q,n,x;
    cin>>q;
    while(q--)
    {
     cin>>n;
     for(int i=1;i<=n;i++){
        cin>>x;
         v[i].push_back(x);
     }
     for(int i=1;i<=n;i++){
        if(!vis[i]){
            ans[i]=dfs(i,0);
        }
     }
     for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
     cout<<endl;
     memset(vis,0, sizeof(vis));
     for(int i=1;i<=n;i++) v[i].clear();

    }

    return 0;
}
