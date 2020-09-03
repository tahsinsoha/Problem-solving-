#include<bits/stdc++.h>
using namespace std;
long long arr[507][507];
long long cs[1000007];
long long ps[1000007];

int main()
{

    int n,m;

    cin>>n>>m;
    long long sum=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=n; i>=1; i--)
    {
        for(int j=m; j>=1; j--)
        {
            if(arr[i][j]==0)
            {
                arr[i][j]=min(arr[i+1][j],arr[i][j+1])-1;

            }
            if((arr[i-1][j]>=arr[i][j] || arr[i][j-1]>=arr[i][j]) &&i!=0 &&j!=0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
            sum+=arr[i][j];
        }
    }
    cout<<sum<<endl;

    return 0;

}









