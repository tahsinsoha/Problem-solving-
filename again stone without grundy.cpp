#include<bits/stdc++.h>
using namespace std;

int grundy( int x )
{
    if( !(x&1) )
        return x/2;

    return grundy(grundy(x-1));
}

int main()
{
    int tc;
    cin>>tc;

    for(int t=1;t<=tc;t++)
    {
        int n;
        scanf("%d", &n);

        int ans= 0;

        for( int i=0;i<n;i++ )
        {
            int p;
            scanf("%d", &p);

            ans^= grundy(p);
        }

        printf("Case %d: ", t);

        if(!ans)
            printf("Bob\n");
        else
            printf("Alice\n");
    }
}
