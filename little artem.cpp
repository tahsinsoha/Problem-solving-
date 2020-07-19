#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int n,m;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)

            {
                if(i==n && j==m)
                    cout<<"W";
                else
                    cout<<"B";

            }
            cout<<endl;
        }
    }
    return 0;



}

