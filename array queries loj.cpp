#include<bits/stdc++.h>
#define mx 100001
using namespace std;
int arr[mx];
int tree[mx * 4];
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = min(tree[Left],tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1,p2);
}

int main()
{
    int t,n,q,x,y;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&q);

        for(int j=1; j<=n; j++)
            scanf("%d",&arr[j]);
        init(1,1,n);
        printf("Case %d:\n",i);
        for(int k=1; k<=q; k++)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",query(1,1,n,x,y));
        }

    }
    return 0;
}

