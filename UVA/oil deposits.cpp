#include<bits/stdc++.h>
using namespace std;;
int m,n,cnt;
vector<string>v;
string s;
bool visited[100][100];
int di[] = {1,1,1,-1,-1,-1,0,0};
int dj[] = {1,0,-1,1,0,-1,1,-1};

void dfs(int x, int  y){
visited[x][y]=1;
int I,J;
for(int i=0;i<8;i++){
    I= x+di[i];
    J= y+dj[i];
    if(I>=0 && I<m &&  J>=0 &&J<n && !visited[I][J] ){
        visited[I][J]=1;
        if(v[I][J]=='@') dfs(I,J);
    }
}

}


int main(){
while(cin>>m>>n){
    if(m==0) break;
    //string s;
    v.clear();
    for(int i=0;i<m;i++){
          cin>>s;
         v.push_back(s);
    }
cnt=0;
memset(visited,0,sizeof(visited));
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(visited[i][j]==0){
            visited[i][j]=1;
            if(v[i][j]=='@'){
                cnt++;
                dfs(i,j);
            }
        }
    }
}

cout<<cnt<<endl;
}



return 0;
}
