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
    tree[node] = tree[Left] + tree[Right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        tree[node] += newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{
    int t,n,q,x,y,p,r;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&q);
        for(int j = 1; j<4*mx; j++)
            tree[j]=0;

        for(int j=1; j<=n; j++)
            scanf("%d",&arr[j]);
        init(1,1,n);
        printf("Case %d:\n",i);
        for(int k=1; k<=q; k++)
        {
            scanf("%d",&x);
            if(x==1)
            {
                scanf("%d",&y);
                printf("%d\n",arr[y+1]);

                update(1,1,n,y+1,-arr[y+1]);
                arr[y+1]=0;
            }

            else if(x==2)
            {
                scanf("%d%d",&p,&r);
                update(1,1,n,p+1,r);
                arr[p+1]+=r;
            }
            else
            {
                scanf("%d%d",&p,&r);
                printf("%d\n",  query(1,1,n,p+1,r+1));

            }
        }

    }

    return 0;
}


