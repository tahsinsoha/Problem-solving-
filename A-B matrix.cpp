#include<bits/stdc++.h>
using namespace std;
int arr[57][57];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(n*a!=m*b)
        {
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                arr[i][j]=0;

        int p=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=a; j++)

            {
                p++;
                if(p==m+1) p=1;
                arr[i][p]=1;
            }
        }

        cout<<"YES"<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;

        }



    }
    return 0;
}















