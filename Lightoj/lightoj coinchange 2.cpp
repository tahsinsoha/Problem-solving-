#include<bits/stdc++.h>
int coin[105];
int way[10005];
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    for( k=1; k<=t; k++)
    {
        int n,money;
        cin>>n>>money;
        memset(way,0,sizeof(way));
        memset(coin,0,sizeof(coin));
        for(int i=0; i<n; i++) cin>>coin[i];
        way[0]=1;
        for(int i=0; i<n; i++)
        {
            for(int j=coin[i]; j<=money; j++) way[j]= ((way[j]%100000007)+(way[j-coin[i]]%100000007))%100000007;
        }
        cout<<"Case "<<k<<": "<<(way[money]%100000007)<<endl;

    }
    return 0;
}

