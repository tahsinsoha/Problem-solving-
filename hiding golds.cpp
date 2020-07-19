#include<bits/stdc++.h>
using namespace std;

int o;
int ev;

char arr[22][22];
int g[22][22];
vector<int>v[500];
int seen[500];
int vis[500];

int dx[]= {1,-1,0,0,1,1,-1,-1};
int dy[]= {0,0,1,-1,-1,1,-1,1};

int bpm(int p)
{

    for (int i = 0; i < v[p].size(); i++)
    {
        int u = v[p][i];
        if(!seen[u])
        {


            seen[u] = 1;

            if(vis[u] < 0 or bpm(vis[u]))
            {
                vis[u] = p;
                return true;
            }

        }

    }

    return false;

}



int main()
{

    int t,ans;




    scanf("%d", &t);
    for (int cs = 1; cs <= t; cs++)
    {
        int n,m;
        scanf("%d", &m);
        scanf("%d", &n);

        o = 0;
        ev = 0;

        int cnt=0;


        for(int i=0; i<500; i++)
            v[i].clear();

        for (int i=0; i<m; i++)
        {

            for(int j=0; j<n; j++)
            {

                cin>>arr[i][j];

                if(arr[i][j] == '*')
                {
                    cnt++;

                    if((i+j)%2 == 0)
                        g[i][j] =++ev;
                    else
                        g[i][j] =++o ;
                }


            }
        }



        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i][j]=='*' and (i+j)%2 == 0)
                {
                    for(int k=0; k<4; k++)
                    {
                        int x=i+dx[k];
                        int y=j+dy[k];
                        if(x<0||x>=m||y<0||y>=n)
                            continue;

                        if(arr[x][y]=='*')
                            v[g[i][j]].push_back(g[x][y]);
                    }
                }
            }
        }


        memset(vis, -1, sizeof vis);
        ans = 0;

        for (int i = 1; i <= ev ; i++)
        {
            memset(seen, 0, sizeof seen);
            if(bpm(i))
            {
                ans++;
            }

        }

        printf("Case %d: %d\n", cs, ev+o - ans);
        ev = o = 0;

    }

}
