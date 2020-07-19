#include<iostream>
#include<vector>
#include<stdio.h>
#include<string.h>
#define ll long long
using namespace std;

vector<ll>v[1007];
ll n,m,x,a,b,g,p;
bool vis[1007];
ll match[1007];
ll arr[1007][1007],brr[1007];

bool bpm(int k)
{
    for(int j=0; j<v[k].size(); j++)
    {
        int r = v[k][j];
        if(!vis[r])
        {
            vis[r]=true;
            if(match[r]==-1 or bpm(match[r]))
            {
                match[r]=k;
                return true;
            }


        }

    }
    return false;
}

int main()
{
    int t=0;

    ll ans ;
 while(cin>>g>>p>>m)
    {
        if(g==0 && p==0 && m==0) break;
        t++;
        ll ans = 0;
        for(int j=0; j<1002; j++)
            v[j].clear();
           memset(arr,0,sizeof arr);


       for(int j=0;j<m;j++){
        cin>>a>>b;
        arr[a][b]=1;

       }
       for(int j=1;j<=g;j++)
           for(int k=1;k<=p;k++)
                if(arr[j][k]==0) v[j].push_back(k);

        memset(match, -1, sizeof(match));

        for(int j=1; j<1007; j++)
        {

            memset(vis,0,sizeof(vis));
            if(bpm(j))
                ans++;
        }
        printf("Case %d: %lld\n",t,(g+p-ans));

    }
    return 0;
}


