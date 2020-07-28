#include<bits/stdc++.h>
using namespace std;
const int k = log2(100005)+1;
int arr[100005];
int table[100005][k];
//nt n,q;
void prepro(int n)
{
    for(int i=0; i<n; i++)
        table[i][0] = arr[i];
    for(int j=1; (1<<j)<=n; j++)
        for(int i=0; (i+(1<<j)-1)<n; i++)
            table [i][j]= min(table[i][j-1], table[i+(1<<(j-1))][j-1]);



}
int query(int low, int high)
{
    int l = high-low+1;
    int m = log2(l);
    return min(table[low][m],table[low+l-(1<<m)][m]);
}
int main()
{
    int t,tc;
    scanf("%d",&t);
    for( tc=1; tc<=t; tc++)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        // int arr[n+5];
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        prepro(n);
        printf("Case %d:\n",tc);
        int high,low;
        while(q--)
        {
            scanf("%d%d",&high,&low);
            printf("%d\n",query(high-1,low-1));

        }
    }
    return 0;
}
