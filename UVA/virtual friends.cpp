#include<bits/stdc++.h>
using namespace std;
int par[200007];
int cnt;
vector<int>v;
int r[200007];
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
    cin>>t;

    while(t--)
    {

        cin>>n;
        for(int i=1; i<=2*n; i++)
        {

            par[i]=i;
            r[i]=1;
        }
        int cnt=1;
        for(int i=1; i<=n; i++)
        {
            cin>>s>>p;

            if(!mpp[s])
                mpp[s]=cnt++;
            if(!mpp[p])
                mpp[p]=cnt++;;
            Union(mpp[s],mpp[p]);
            cout<<r[Find(mpp[p])]<<endl;
        }




        mpp.clear();


    }

    return 0;
}


