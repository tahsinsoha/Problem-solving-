#include<bits/stdc++.h>
using namespace std;
const long long int N=200005;
vector<int>ve;
 int par[200005];
    int n,m,x,y,start,endd,visit[N],dist[N];
    vector<long long int>graph[N];

int main()
{
//vector<int>v;


    cin>>n;

    for(int i=2; i<=n; i++)
    {
        cin>>x;
        graph[i].push_back(x);
        graph[x].push_back(i);


    }
    par[1]=-1;
    int u,v;
    //cin>>start>>endd;
    visit[1]=1;
    dist[1]=0;
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int j=0; j<graph[u].size(); j++)
        {
            int v=graph[u][j];
            if(!visit[v])
            {
                visit[v]=1;
                par[v]=u;
                dist[v]=dist[u]+1;
                q.push(v);
            }

        }


    }
   // ve.push_back(n);
    while(par[n]!=-1){
        ve.push_back(n);
        n=par[n];
    }
cout<<1<<" ";
for(int k= ve.size()-1;k>=0;k--){

    cout<<ve[k]<<" ";

}
cout<<endl;
    //cout<<"distance from the starting node "<<dist[endd]<<endl;
    return 0;
}
