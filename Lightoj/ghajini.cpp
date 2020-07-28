#include<bits/stdc++.h>
#define mx 100001
#define ll long long
#define inf 1000000000
using namespace std;
ll arr[mx];
int tree[mx * 4];
ll sum[mx*4];
void init(ll node, ll b, ll e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        sum[node]=arr[b];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    sum[node]= max(sum[Left],sum[Right]);

    tree[node] =min( tree[Left],tree[Right]);
}
ll mnquery(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return inf;
    if (b >= i && e <= j)
        return tree[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = mnquery(Left, b, mid, i, j);
    ll p2 = mnquery(Right, mid + 1, e, i, j);
    return min(p1,p2);
}

ll mxquery(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return -inf;
    if (b >= i && e <= j)
        return sum[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = mxquery(Left, b, mid, i, j);
    ll p2 = mxquery(Right, mid + 1, e, i, j);
    return max(p1,p2);
}

int main()
{
    ll t,n,q,x,y,p,r;
    scanf("%lld",&t);
    for(ll i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&q);
        for(ll j = 1; j<4*mx; j++)
            tree[j]=inf,sum[j]=-inf;

        for(ll j=1; j<=n; j++)
            scanf("%lld",&arr[j]);
        init(1,1,n);
        printf("Case %lld: ",i);
        p = -inf;
        for(ll k=1; q+k-1<=n; k++)
        {

            p = max(p,mxquery(1,1,n,k,q+k-1)- mnquery(1,1,n,k,q+k-1));

        }
        printf("%lld\n",p);

    }


    return 0;
}



