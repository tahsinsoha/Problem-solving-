#include<bits/stdc++.h>
//# define ull unsigned long long
# define INF 1e18
using namespace std;
typedef pair<unsigned long long,unsigned long long>pairr;
unsigned long long parent[1000005];
unsigned long long dist[1000005];
void printpath(unsigned long long node){

if(parent[node]==node)
	{
		//printf("%llu ", node);
		cout<<node<<" ";
		return;
	}
	printpath(parent[node]);
	//printf("%llu ", node);
cout<<node<<" ";




}

int main()
{
    unsigned long long p,q,w,m,n;
    cin>>n>>m;
    vector<pairr>graph[n+1];
    for(unsigned long long i=1; i<=n; i++)
        dist[i]=INF;
    for(int j=0; j<m; j++)
    {
        cin>>p>>q>>w;
        graph[p].push_back(pairr(q,w));
        graph[q].push_back(pairr(p,w));
    }
    priority_queue<pairr, vector<pairr>, greater<pairr> > pq;
    parent[1]=1;
    dist[1]=0;
    parent[n]=-1;
    pq.push(pairr(0,1));
    while(!pq.empty())
    {
        unsigned long long u=pq.top().second;
        unsigned long long c=pq.top().first;
        pq.pop();
        if(dist[u]<c)
            continue;
        for(unsigned long long i=0; i<graph[u].size(); i++)
        {
            unsigned long long  cur=graph[u][i].first;
            unsigned long long cost=graph[u][i].second;
            if(dist[u]+cost<dist[cur])
            {
                parent[cur]=u;
                dist[cur]=dist[u]+cost;
                pq.push(pairr(dist[cur],cur));
            }

        }

    }
    if(parent[n]==-1)
        cout<<-1<<endl;
    else
        printpath(n);

}
