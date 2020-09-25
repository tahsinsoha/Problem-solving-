#include<bits/stdc++.h>
using namespace std;
int col[1000007];
int row[1000007];
int h[107][107];

int main()
{
    int n,m,p;
    cin>>n>>m>>p;

    for(int i=1; i<=m; i++)
        cin>>col[i];

    for(int i=1; i<=n; i++)
        cin>>row[i];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>h[i][j];


        }
    }

      for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(h[i][j]==1)
           cout<<min(row[i],col[j])<<" ";

           else cout<<0<<endl;
        }
        cout<<endl;
    }



    return 0;

}










