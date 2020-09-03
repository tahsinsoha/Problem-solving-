#include<bits/stdc++.h>
using namespace std;
vector<int> adj[107];
int ind[107];
vector<int> topo;
map<int,string>is;
map<string,int>si;

int main()
{
    int n,m;
    int k=0;

    while(cin>>n)
    {
        k++;

        for( int i=n; i>=1; i-- )
        {
            string s;

            cin>>s;
            si[s]=i;
            is[i]=s;

        }
        cin>>m;

        priority_queue<int>q;
        for(int i=1; i<=m; i++)
        {

            string s1,s2;
            cin>>s1>>s2;
            adj[si[s1]].push_back(si[s2]);
            ind[si[s2]]++;
        }

        for( int i=1; i<=n; i++ )
            if(!ind[i])
                q.push(i);

        while(!q.empty())
        {
            int u= q.top();
            topo.push_back(u);
            q.pop();

            for( auto v: adj[u] )
            {
                ind[v]--;

                if(!ind[v])
                    q.push(v);
            }
        }

        printf("Case #%d: Dilbert should drink beverages in this order:",k);

        for(auto x: topo)
            cout<<" "<<is[x];

        cout<<"."<<endl;

        for(int i=1; i<=n; i++)
        {
            adj[i].clear();
            ind[i]=0;

        }
        is.clear();
        si.clear();
        topo.clear();
        cout<<endl;


    }

}


