#include<bits/stdc++.h>
using namespace std;
///#define n 100000
///vector<int>graph[100000];
///int colour[100000];
int main(){
int N,x,y,m;
///vector<int>graph[100000];
///int colour[100000];

while(cin>>N){
        if(N==0) break;
vector<int>graph[100000];
int colour[100000];

cin>>m;
for(int i=1;i<=m;i++){
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
}
queue<int>q;
memset(colour,-1,sizeof(colour));
colour[0]=0;
q.push(0);
int flag=0;
while(!q.empty()){
    int u= q.front();
    q.pop();
    for(int i= 0;i<graph[u].size();i++){
        if(colour[graph[u][i]]==-1){
            if(colour[u]==0) colour[graph[u][i]]=1;
            else colour[graph[u][i]]=0;
            q.push(graph[u][i]);
        }
        else {
           if(colour[graph[u][i]]==colour[u]){
                   flag=1;
                   break;
           }
        }
    }
    if( flag==1 ) break;

}
if( flag==1 ) cout<<"NOT BICOLORABLE."<<endl;
else cout<<"BICOLORABLE."<<endl;

}

return 0;
}
