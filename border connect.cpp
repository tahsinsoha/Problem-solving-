/**
 *    author:  border
 *    created: 24.02.2019 21:58:51
**/
#include <bits/stdc++.h>

using namespace std;

#define debug(s) cout<< #s <<" = "<< s <<endl
#define all(v) (v).begin(), (v).end()
#define mem(a,val) memset(a,val,sizeof a)

#define ll long long
#define ff first
#define ss second
#define pb push_back
#define endl '\n'

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int n;
char g[60][60];
bool viss[60][60],vise[60][60];
vector<pair <int,int> > star,en;

void dfs1(int x, int y){
  viss[x][y] = 1;
  star.pb({x,y});
  for(int i = 0; i < 4; ++i){
    int tx = x+dx[i];
    int ty = y+dy[i];
    if(!viss[tx][ty] and g[tx][ty] == '0') dfs1(tx,ty);
  }
}

void dfs2(int x, int y){
  vise[x][y] = 1;
  en.pb({x,y});
  for(int i = 0; i < 4; ++i){
    int tx = x+dx[i];
    int ty = y+dy[i];
    if(!vise[tx][ty] and g[tx][ty] == '0') dfs2(tx,ty);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  /*#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out","w",stdout);
  #endif*/
  cin >> n;
  int sx,sy,tx,ty;
  cin >> sx >> sy;
  cin >> tx >> ty;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j) cin >> g[i][j];
  }
  dfs1(sx,sy);
  if(viss[tx][ty]){
    cout << "0" << endl;
    return 0;
  }
  dfs2(tx,ty);
  int mini = INT_MAX;
  for(pair<int,int> x: star){
    for(pair<int,int> y: en){
      int dis = (x.ff-y.ff)*(x.ff-y.ff)+(x.ss-y.ss)*(x.ss-y.ss);
      mini = min(mini,dis);
    }
  }
  cout << mini << endl;
}
