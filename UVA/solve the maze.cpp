#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
string s[55];
bool vis[55][55];
int n,m;

int d1[]= {1,0,0,-1};
int d2[]= {0,1,-1,0};

bool valid(int x, int y)
{

    if(x<0 || x>=n)
        return 0;
    if(y<0 || y>=m)
        return 0;

    if(s[x][y]=='#')
        return 0;

    return 1;

}

void dfs(int x, int y)
{
    if(vis[x][y] || !valid(x,y))
        return;
    vis[x][y]=1;

    for(int i=0; i<4; i++)
    {

        if(valid(x+d1[i],y+d2[i]))
            dfs(x+d1[i],y+d2[i]);

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        for(int i=0; i<n; i++)
            cin>>s[i];

        memset(vis,0,sizeof(vis));

        dfs(n-1,m-1);
        int f=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {

                if(s[i][j]!='B' )
                    continue;

                for(int k = 0 ; k<4; k++)
                {
                    if(valid(i+d1[k],j+d2[k]))
                    {
                        if(s[i+d1[k]][j+d2[k]]=='G')
                        {
                            f=1;
                            break;
                        }

                        if(s[i+d1[k]][j+d2[k]]!='B')
                        {
                            s[i+d1[k]][j+d2[k]]='#';

                        }



                    }

                }

                if(f)
                    break;
            }
            if(f)
                break;
        }

        if(f)
        {
            cout<<"NO"<<endl;
            continue;
        }

        memset(vis,0,sizeof(vis));

        dfs(n-1,m-1);

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {

                if(s[i][j]=='G' && !vis[i][j])
                    f=1;
                if(s[i][j]=='B' && vis[i][j])
                    f=1;

            }
        if(f)
        {
            cout<<"NO"<<endl;

        }
        else
            cout<<"YES"<<endl;



    }


    return 0;

}










