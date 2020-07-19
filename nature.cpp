#include<bits/stdc++.h>
using namespace std;
int par[5007];
int cnt;
vector<int>v;
int r[5007];
int Find( int u )
{

    if(u==par[u])
        return u;
    par[u]= Find(par[u]);
    return par[u];
}
void Union( int a, int b )
{
    int u= Find(a);
    int v= Find(b);

    if(u!=v)
    {
        par[u]= v;
        r[v]+=r[u];

    }
}
int main()
{
    int t;
    int n,m;
    string s,p;
    map<string,int>mpp;

    while(cin>>n>>m  &&(n!=0 || m!=0))
    {



        for(int i=1; i<=n; i++)
        {
            cin>>s;

            mpp[s]=i;
            par[mpp[s]]= mpp[s];
            r[i]=1;
        }

        for(int i=1; i<=m; i++)
        {

            cin>>s>>p;

            Union(mpp[s],mpp[p]);
        }


        for( int i=1; i<=n; i++)
        {
            v.push_back(r[i]);
        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[0]<<endl;

        mpp.clear();
        v.clear();

    }

    return 0;
}

