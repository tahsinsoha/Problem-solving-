#include <bits/stdc++.h>
#define endl '\n'
#define MX 100007
using namespace std;

int arr[MX];
struct{
    int sum, lzz;
}trr[MX*3] ;

void build( int nd, int l, int r )
{
    if(l==r)
    {
        trr[nd].sum=arr[l];
        return;
    }

    int lChild= 2*nd;
    int rChild= 2*nd+1;
    int mid=(l+r)/2;
    build( lChild, l, mid );
    build( rChild, mid+1, r );

    trr[nd].sum=trr[lChild].sum+trr[rChild].sum;
}

void update( int nd, int l, int r, int left, int right )
{
    if(l>right or r<left)
        return;
    else if(l<=left and r>=right)
    {
        trr[nd].sum+=(right-left+1)*1;
        trr[nd].lzz+=1;
        return;
    }

    int lChild= 2*nd;
    int rChild= 2*nd+1;
    int mid=(left+right)/2;

    update( lChild, l, r, left, mid );
    update( rChild, l, r, mid+1, right );

    trr[nd].sum= trr[lChild].sum+trr[rChild].sum+ (right-left+1)*trr[nd].lzz;

}

int query( int nd, int l, int r, int left, int right, int crr=0 )
{
    if(left>r or right<l)
        return 0;
    if(left>=l and right<=r)
        return trr[nd].sum+crr*(right-left+1);

    int lChild= 2*nd;
    int rChild= 2*nd+1;
    int mid=(left+right)/2;

    int q1= query( lChild, l, r, left, mid, crr+trr[nd].lzz );
    int q2= query( rChild, l, r, mid+1, right, crr+trr[nd].lzz );

    return q1+q2;

}

int main()
{
    int tc;
    cin>>tc;

    for(int i=1;i<=tc;i++)
    {
        printf("Case %d:\n", i);
        memset(trr, 0, sizeof(trr));
        memset(arr, 0, sizeof(arr));
        char s[MX];
        scanf("%s", s);
        int len=strlen(s);
        for(int j=0;j<len;j++)
            arr[j+1]=(s[j]-'0');

        build(1, 1, len);

        int q;
        scanf("%d", &q);
        while(q--)
        {
            char c;
            getchar();
            scanf("%c", &c);
            if(c=='I')
            {
                int l,r;
                scanf("%d %d", &l, &r);
                update(1, l, r, 1, len);
            }

            else
            {
                int idx;
                scanf("%d", &idx);
                int val=query(1, idx, idx, 1, len,0)%2;
                printf("%d\n", val);
            }
        }
    }
}
