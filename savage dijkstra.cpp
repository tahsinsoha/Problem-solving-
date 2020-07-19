#include <bits/stdc++.h>
#define ull unsigned long long
#define INF 1e18

using namespace std;

typedef pair<unsigned long long,unsigned long long> pii;
ull parent[1000005];
ull dist[1000005];

void printPath(ull node)
{
	if(parent[node]==node)
	{
		printf("%llu ", node);
		return;
	}
	printPath(parent[node]);
	printf("%llu ", node);
}

int main()
{
	ull m,n,p,q,w;
	scanf("%llu %llu", &n,&m);
	vector <pii> graph[n+1];
	for(ull i=1;i<=n;i++)
        dist[i]=INF;
	while(m--)
	{
		scanf("%llu %llu %llu", &p,&q,&w);
		graph[p].push_back(pii(q,w));
		graph[q].push_back(pii(p,w));
	}
	priority_queue<pii, vector<pii>, greater<pii> > pq;
	dist[1]=0;
	parent[1]=1;
	parent[n]=-1;
	pq.push(pii(0,1));
	while(!pq.empty())
	{
		ull u=pq.top().second;
		ull c=pq.top().first;
		pq.pop();
		if(dist[u]<c)
			continue;
		for(ull i=0;i<graph[u].size();i++)
		{
			ull node=graph[u][i].first;
			ull cost=graph[u][i].second;

			if(dist[u]+cost<dist[node])
			{
				parent[node]=u;
				dist[node]=dist[u]+cost;
				pq.push(pii(dist[node], node));

			}
		}
	}

	if(parent[n]==-1)
        printf("-1");
    else
	printPath(n);

}
