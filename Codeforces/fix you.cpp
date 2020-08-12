#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
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
        int cnt=0;
        char c;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>c;
                if(j==m)
                {
                    if(c!='C' && c!='D' )
                        cnt++;
                }

                if(i==n && c!='R' && c!='C')
                {
                    cnt++;
                }

            }

        }

        cout<<cnt<<endl;
    }


    return 0;

}









