#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int r[1007],c[1007];
int grid[1007][1007];
int main()
{

    int h,w;
    cin>>h>>w;
    for(int i=0; i<h; i++)
    {
        cin>>r[i];
        if(grid[i][r[i]]==1)
            return cout<<"0\n",0;
        grid[i][r[i]]=-1;
        for(int j=0; j<r[i]; j++)
        {
            if(grid[i][j]==-1)
                return cout<<"0\n",0;
            grid[i][j]=1;
        }
     //   cout<<r[i]<<grid[i][r[i]]<<endl;
    }

    for(int i=0; i<w; i++)
    {
        cin>>c[i];
        if(grid[c[i]][i]==1)
            return cout<<"0\n",0;
        grid[c[i]][i]=-1;
        for(int j=0; j<c[i]; j++)
        {
            if(grid[j][i]==-1)
                return cout<<"0\n",0;

            grid[j][i]=1;
        }
     //   cout<<c[i]<<grid[c[i]][i]<<endl;
    }
    ll ans =1;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
            if(grid[i][j]==0)
                ans = (ans*2)%mod;
    }
    cout<<ans<<endl;
    return 0;
}
