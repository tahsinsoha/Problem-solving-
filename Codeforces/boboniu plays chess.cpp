#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1000007];
long long cs[1000007];
int  brr[1000007];

int main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;

    cout<<x<<" "<<y<<endl;

    for(int i=y+1; i<=m; i++)
        cout<<x<<" "<<i<<endl;
    for(int i=y-1; i>=1; i--)
        cout<<x<<" "<<i<<endl;

    for(int i=1; i<=m; i++)
    {

        if(i%2)
        {
            for(int j=1; j<=n; j++)
                if(j!=x)
                    cout<<j<<" "<<i<<endl;
        }

        else
        {
            for(int j=n; j>=1; j--)
                if(j!=x)
                    cout<<j<<" "<<i<<endl;

        }
    }

    return 0;

}














