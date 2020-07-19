#include<bits/stdc++.h>
#define mx 100002
using namespace std;
int t,tc,node,m,n,q,d1,d2,p,tmp;
int L[mx];
int P[mx][22];
int T[mx];
vector<int>g[mx];
void dfs(int from, int u, int dep)
{
    T[u]=from;
    L[u]=dep;
    for(int i=0; i<(int)g[u].size(); i++)
    {
        int v = g[u][i];
        if(v==from)
            continue;
        dfs(u,v,dep+1);
    }

}
int lca_query(int N,int p, int q)
{
    int log,i;
    if(L[p]<L[q])
        tmp=p,p=q,q=tmp;
    log=1;
     while(1)
    {
        int next=log+1;
        if((1<<next)>L[p])

            break;
        log++;
    }
    for(i=log; i>=0; i--)
    {
        if(L[p]-(1<<i)>=L[q])
            p=P[p][i];

    }
    if(p==q)
        return p;
    for(i=log; i>=0; i--)
        if(P[p][i]!=-1 && P[p][i]!=P[q][i])
            p=P[p][i], q= P[q][i];
    return T[p];
}
void lca(int N)
{
    memset(P,-1,sizeof(p));
    int i,j;
    for(int i=1; i<=N; i++)
        P[i][0]=T[i];
    for(j=1; 1<<j<=N; j++)
        for(i=1; i<=N; i++)
            if(P[i][j-1]!=-1)
                P[i][j]=P[P[i][j-1]][j-1];
}
int main()
{
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        cin>>node;
        for(int i=1; i<=node; i++)
        {
            cin>>m;
            while(m--)
            {
                cin>>n;
                g[i].push_back(n);
            }
        }
        cin>>q;
        dfs(1,1,0);
        lca(node);
        cout<<"Case "<<tc<<":"<<endl;
        while(q--)
        {
            cin>>d1>>d2;
            printf( "%d\n", lca_query(node,d1,d2) );
        }
        for(int i=0; i<=node; i++)
            g[i].clear();
        memset(P,0,sizeof(P));
        memset(L,0,sizeof(L));
        memset(T,0,sizeof(T));
    }
    return 0;
}
