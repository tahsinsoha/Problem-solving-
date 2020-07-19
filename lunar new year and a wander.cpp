#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100000];
int visit[100000];
int main(){
int n,m,x,y;
cin>>n>>m;
for(int i=1;i<=m;i++){
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
}

int start=1;
priority_queue<int, vector<int>, greater<int> > q;
q.push(1);
visit[1]=1;
//cout<<1<<' ';
while(!q.empty()){
     int u=q.top();
     cout<<u<<' ';
     q.pop();
     //int cont=0;
     for(int i=0;i<graph[u].size();i++){
            int v=graph[u][i];
            if(!visit[v]) {
                   // if(cont==0) cout<<v<<' ';
                    visit[v]=1;
                    //cout<<v<<' ';
                    //cont++;
                    q.push(v);
                    //break;

            }
           // else if(visit[v]) q.push(v);

     }

}
//cout<<n<<endl;
return 0;
}
