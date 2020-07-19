#include<bits/stdc++.h>
using namespace std;
int m,n;
char grid[57][57],w[57];
void up_to_low(char a[])
{
    for(int i=0; a[i]; i++)
        if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]+32;
}
bool loc(int i,int j)
{
    int x;
    for(x=1; i-x>=0 && w[x]==grid[i-x][j]; )
    {
        x++;
        if(w[x]=='\0')
            return 1;
    }
    for(x=1; i+x<m && w[x]==grid[i+x][j]; )
    {
        x++;
        if(w[x]=='\0')
            return 1;
    }
    for(x=1; j-x>=0 && w[x]==grid[i][j-x]; )
    {
        x++;
        if(w[x]=='\0')
            return 1;
    }
    for(x=1; j+x<n && w[x]==grid[i][j+x]; )
    {
       x++;
        if(w[x]=='\0')
            return 1;
    }
    for(x=1; i-x>=0&& j-x>=0 &&w[x]==grid[i-x][j-x]; )
    {
        x++;
        if(w[x]=='\0')
            return 1;
    }
    for(x=1; i+x<m && j-x>=0 && w[x]==grid[i+x][j-x]; )
    {
        x++;
        if(w[x]=='\0')
            return 1;
    }
    for(x=1; i-x>=0 && j+x<n && w[x]==grid[i-x][j+x]; )
    {
        x++;
        if(w[x]=='\0')
            return 1;
    }
    for(x=1; i+x<m &&j+x<n && w[x]==grid[i+x][j+x]; )
    {
        x++;
        if(w[x]=='\0')
            return 1;
    }
    return 0;
}



int main()
{
    int tc,q;
    cin>>tc;
    for(int t=1; t<=tc; t++)
    {
        cin>>m>>n;
        for(int i=0; i<m; i++)
        {
//
             cin>>grid[i];
            //scanf("%s",grid[i]);
            up_to_low(grid[i]);
        }
        cin>>q;
        while(q--)
        {
            //scanf("%s",w);
            cin>>w;
            up_to_low(w);
            int flag=0;
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(grid[i][j]==w[0] &&loc(i,j))
                    {
                        cout<<i+1<<" "<<j+1<<endl;
                        flag=1;
                        break;
                    }

                }
                if(flag==1)
                    break;
            }

        }
        if(t!=tc)
            cout<<endl;////////bhul hote pare
    }

    return 0;
}
