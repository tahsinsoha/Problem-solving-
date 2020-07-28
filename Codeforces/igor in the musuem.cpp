#include<bits/stdc++.h>
using namespace std;
char grid[1010][1010];
int vis[1010][1010];
int ans[10000010];
int cont,p,n,m;
int d1[]= {1,0,-1,0};
int d2[]= {0,1,0,-1};
int isvalid(int x,int y){
if(x<0 || x>=n)
    return 0;
if(y<0 || y>=m) return 0;
if(grid[x][y]=='*') return -1;
return 1;
}
void dfs(int x, int y){
vis[x][y]=p;
for(int i=0;i<4;i++){
    int dx= x+d1[i];
    int dy = y+d2[i];
    if(vis[dx][dy]) continue;
    if(isvalid(dx,dy)==1) dfs(dx,dy);
    else if(isvalid(dx,dy)==-1) cont++;
}
}
int main(){
int q,x,y;
cin>>n>>m>>q;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
    }
}
for(int i=1;i<=q;i++){
cin>>x>>y;
x--,y--;
cont=0;
if(!vis[x][y]){
        p++;
        dfs(x,y);
        ans[p]=cont;

   }
   cout<<ans[vis[x][y]]<<endl;
}
return 0;
}
