#include<bits/stdc++.h>
using namespace std;
vector<int>v[100007];
int arr[100007];
int main()
{
    int n;
    cin>>n;
    int a,b;
    memset(arr,-1,sizeof(arr));
    for(int i=1; i<n; i++)
    {
        cin>>a>>b;
        v[a].push_back(i);
        v[b].push_back(i);

    }
    pair<int,int>mx(0,0);
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        mx=max(mx, make_pair((int)v[i].size(),i));
    }
    for(int i=0; i< (int)(v[mx.second].size()); i++)
    {
        arr[(int)v[mx.second][i]]=cnt;
        cnt++;

    }

    for(int i=1; i<n; i++)
    {
        if(arr[i]==-1)
        {
            arr[i]=cnt;
            cnt++;
        }

        cout<<arr[i]<<endl;

    }
    return 0;
}
