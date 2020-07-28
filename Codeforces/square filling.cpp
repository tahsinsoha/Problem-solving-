#include<bits/stdc++.h>
using namespace std;
int arr[57][57];
int brr[57][57];
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=m; j++)
            cin>>arr[i][j];
    }
    int cnt =0;
    vector<pair<int,int>>v;
    for(int i=1; i<n; i++)
    {

        for(int j=1; j<m; j++)
        {
            if(arr[i][j] && arr[i+1][j] && arr[i][j+1] && arr[i+1][j+1])
            {
                brr[i][j]=1;
                brr[i+1][j]=1;
                brr[i][j+1]=1;
                brr[i+1][j+1]=1;

                cnt++;
                v.push_back({i,j});
            }

        }
    }


    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=m; j++)
        {
            if(arr[i][j]!= brr[i][j])
            {
                cout<<-1<<endl;
                return 0;
            }

        }
    }
    cout<<cnt<<endl;
    for(int i=0; i<v.size(); i++)
    {

        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}














