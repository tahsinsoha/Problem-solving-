#include<bits/stdc++.h>
using namespace std;
int p[200007];
int main()
{
    int n,m,k,x,y;
    cin>>n>>m>>k;
    vector<char>v;
    for(int i=1; i<=k; i++)
        cin>>x>>y;
    for(int i=1; i<=k; i++)
        cin>>x>>y;
    cout<<n+m+n*m-3<<endl;
    for(int i=1; i<n; i++)
        cout<<"U";
    for(int i=1; i<m; i++)
        cout<<"L";
    for(int i=1; i<=n; i++)
    {


        for(int j=1; j<=m-1; j++)
        {
            if(i%2)
                cout<<"R";
            else
                cout<<"L";

        }
        if(i!=n)
            cout<<"D";


    }
    cout<<endl;
    return 0;
}


