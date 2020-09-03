#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10007];
int vis[10007];
int ind[10007];
vector<int> topo;
map<int,string>is;
map<string,int>si;
int flag;
void dfs(int x)
{

    vis[x]=1;

    for(int i=0; i<adj[x].size(); i++)
    {
        if(vis[adj[x][i]]==1)
        {
            flag=1;
            return;
        }

        if(vis[adj[x][i]]==0)
        {
            dfs(adj[x][i]);
        }


    }

    vis[x]=2;

}

int main()
{
    int n,m=1;
    int k=0;
    int t;
    cin>>t;


    for(int i=1; i<=t; i++)
    {
        cin>>n;
        m=1;
        flag=0;
        k++;

        for( int i=1; i<=n; i++ )
        {
            string s,s2;
            cin>>s>>s2;

            if(!si[s])
            {
                si[s]=m;
                is[m]=s;
                m++;
            }
            if(!si[s2])
            {
                si[s2]=m;
                is[m]=s2;
                m++;
            }
            adj[si[s]].push_back(si[s2]);
            ind[si[s2]]++;


        }
        for(int i=1; i<m; i++)
        {
            if(flag==1)
                break;

            if(vis[i]==0)
                dfs(i);

        }

        if(flag==1)
            printf("Case %d: No\n", k);
        else
            printf("Case %d: Yes\n", k);

        for(int i=1; i<m; i++)
        {
            adj[i].clear();
            ind[i]=0;
            vis[i]=0;

        }
        is.clear();
        si.clear();


    }

}



