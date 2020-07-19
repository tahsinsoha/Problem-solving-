
Rim Chowdhury
Wed, 20 Feb, 15:32 (5 days ago)
to me

#include<bits/stdc++.h>
using namespace std;
int connection[100][100],a,b,color[100],n,m,e;
int graphcoloring(int index)
{
    int j;
    for(int i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if((connection[index][j]) && (color[j]==i))
                break;
        }
        if(j>n){

            color[index]=i;
            for(j=1;j<=n;j++){
            if((connection[index][j]) && !color[j] && !graphcoloring(j))
                break;
        }
        if(j>n) {
            return 1;
        }
        color[index]=i;
        }
    }
    return 0;

}
int main()
{

       cin>>n>>m>>e;
       memset(connection,0,sizeof(connection));
       memset(color,0,sizeof(color));
       for(int i=1;i<=e;i++){
        cin>>a>>b;
        connection[a][b]=1;
        connection[b][a]=1;
       }
       if(graphcoloring(1)) cout<<1<<endl;
       else cout<<0<<endl;
}
