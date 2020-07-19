#include<bits/stdc++.h>
using namespace std;
int connection[100][100], vis[100], n,m;
int hamiltoncycle(int index, int depth)
{
    if(index==1)
    {
        if(depth==n)
            return 1;
    }
    for(int i=1; i<=n; i++)
    {
        if(connection[index][i] && !vis[i])
        {
            vis[i]=1;
            if(hamiltoncycle(i, depth+1))
                return 1;
            vis[i]=0;


        }

    }
    return 0;

}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(vis, 0, sizeof vis);
        memset(connection, 0, sizeof connection);
        for(int i=0; i<m; i++)
        {
            cin>>a>>b;

            connection[a][b]=1;
            connection[b][a]=1;
        }
        if(hamiltoncycle(1,0))

            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
