#include<bits/stdc++.h>
#define inf 1e18
using namespace std;
int n;
int x1,y1,x2,y2;
char grid[60][60];
bool vis[60][60];
int dir1[]= {1,0,-1,0};
int dir2[]= {0,-1,0,1};
vector<pair<int,int>>v1,v2;
bool valid(long long int x, long long int y){
if(x<0 or y<0) return 0;
if(x>=n or y>=n) return 0;
return 1;
}
void dfs1(long long int x, long long int y)
{
    vis[x][y]=1;
    v1.push_back(pair<int,int>(x+1,y+1));
    for(int i=0; i<4; i++)
    {
        long long int vx= x+dir1[i];
        long long int vy= y+ dir2[i];
        if(valid(vx,vy) && grid[vx][vy]=='0' && !vis[vx][vy])
            dfs1(vx,vy);
    }
}
void dfs2(long long int x, long long int y)
{
    vis[x][y]=1;
    v2.push_back(pair<int,int>(x+1,y+1));
    for(int i=0; i<4; i++)
    {
        long long int vx= x+dir1[i];
        long long int vy= y+ dir2[i];
        if(valid(vx,vy) && grid[vx][vy]=='0' && !vis[vx][vy])
            dfs2(vx,vy);
    }
}
int main()
{
    cin>>n;
    cin>>x1>>y1>>x2>>y2;
    x1--,x2--,y1--,y2--;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>grid[i][j];
dfs1(x1,y1);
if(vis[x2][y2]){
    cout<<0<<endl;
    return 0;
}
dfs2(x2,y2);
long long int ans= inf;
  for(int i=0; i<v1.size(); i++)
        for(int j=0; j<v2.size(); j++)
        {
            ans= min( ans, (long long )(v1[i].first-v2[j].first)*(v1[i].first-v2[j].first)+(long long)(v1[i].second-v2[j].second)*(v1[i].second-v2[j].second) );
        }

    cout<< ans <<endl;

    return 0;
}
