#include<bits/stdc++.h>
using namespace std;
char ch[25][25];
int vis[25][25];
int w,h,p,q,x,n=0,y;
//int n=0;
void dfs(int x,int y)
{
    int l[]= {1,0,0,-1};
    int m[]= {0,1,-1,0};
    //n=0;
    for(int i=0; i<4; i++)
    {
        if((x+l[i]>=0)&&(x+l[i]<h)&&(y+m[i]>=0)&&(y+m[i]<w)&& vis[x+l[i]][y+m[i]]==0 && ch[x+l[i]][y+m[i]]=='.')
        {
            vis[x+l[i]][y+m[i]]=1;
            n++;
            dfs(x+l[i],y+m[i]);
        }

    }
};

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>w>>h;
        for(int i=0; i<25; i++)
            for(int j=0; j<25; j++)
                vis[i][j]=0;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='@')
                {
                    y=i;
                    x=j;
                    // n=1;
                    vis[y][x]=1;
                }

            }
        }
        dfs(y,x);
        cout<<"Case "<<k<<": "<<n+1<<endl;
    }
    return 0;
}
