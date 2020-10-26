#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long a[107][107];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin>>a[i][j];
        }
        ll tot=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int o1=a[i][m-j-1];
                int o2=a[n-i-1][j];
                vector<int>v;
                v.push_back(a[i][j]);
                v.push_back(o1);
                v.push_back(o2);
                sort(v.begin(),v.end());
                a[i][j]=a[i][m-j-1]=a[n-i-1][j]=v[1];
                tot+=(ll)(v[2]-v[1])+(v[1]-v[0]);
            }
        }
        cout<<tot<<endl;
    }


    return 0;

}














