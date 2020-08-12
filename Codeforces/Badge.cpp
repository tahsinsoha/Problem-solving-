#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
vector<int>v[1007];
bool visited[1007];

void dfs(int i)
{
    visited[i]=1;
    for(int j=0; j<v[i].size(); j++)
    {

        int u =v[i][j];
        if(visited[u])
        {

            cout<<u<<" ";
            return ;
        }
        if(!visited[u])
        {

            visited[u]=1;
            dfs(u);
        }
    }

}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {

        cin>>arr[i];
        v[i].push_back(arr[i]);
        //  v[arr[i]].push_back(i);
    }

    for(int i=1; i<=n; i++)
    {
        memset(visited,0,sizeof(visited));
        dfs(i);



    }

    cout<<endl;

    return 0;

}












