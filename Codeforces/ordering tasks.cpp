#include<bits/stdc++.h>
using namespace std;
vector<int> adj[107];
int ind[107];
vector<int> topo;

int main()
{
    int n,m;
    int k=0;

    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;

        for( int i=0; i<m; i++ )
        {
            int u,v;
            cin>>u>>v;

            adj[u].push_back(v);
            ind[v]++;
        }

        queue<int>q;

        for( int i=1; i<=n; i++ )
            if(!ind[i])
                q.push(i);

        while(!q.empty())
        {
            int u= q.front();
            topo.push_back(u);
            q.pop();

            for( auto v: adj[u] )
            {
                ind[v]--;

                if(!ind[v])
                    q.push(v);
            }
        }

        for(auto x: topo)
            cout<<x<<" ";

            cout<<endl;

      for(int i=1;i<=n;i++)
      {
          adj[i].clear();
          ind[i]=0;

      }
      topo.clear();


    }
}

