#include<bits/stdc++.h>
using namespace std;
int n,q;
int par[100005];
long long int val[100005];
int sparse[100005][20];
void sparse_tab()
{
    memset (sparse,-1,sizeof(sparse));
    for(int i=0; i<n; i++)
        sparse[i][0]=par[i];
    for(int j=1; 1<<j<n; j++)
    {
        for(int i=0; i<n; i++)
            sparse[i][j]= sparse[sparse[i][j-1]][j-1];
    }
}
long long int query(long long int p, long long int v)
{
    int log= log2(n);
    for(int i=log; i>=0; i--)
    {
        if(val[sparse[p][i]]>=v)
            p=sparse[p][i];
    }
    return p;
}
int main()
{
    int t,tc;
    scanf("%d",&t);
    for(tc=1; tc<=t; tc++)
    {
        scanf("%d%d",&n,&q);
        par[0]=0;
        val[0]=1;
        for(int i=1; i<=n-1; i++)
        {
            long long int a,b;
            scanf("%lld%lld",&a,&b);
            par[i]=a;
            val[i]=b;

        }
        sparse_tab();
    printf("Case %d:\n",tc);

        while(q--)
        {
            long long int x,y;
                  scanf("%lld%lld",&x,&y);
            printf("%lld\n",query(x,y));
        }
        memset(par,0,sizeof(par));
        memset(val,0,sizeof(val));
    }
    return 0;
}
