#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int zero[100], one[100];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x;
        for(int i=0;i<100;i++) one[i]=0,zero[i]=0;
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {

                cin>>x;
                if(x)
                    one[i+j]++;
                else
                    zero[i+j]++;


            }

        }
        int ans=0;
        int minn;
        for(int i=0; i<(n+m-1)/2; i++)
        {
             minn=min((one[i]+one[n+m-2-i]),(zero[i]+zero[n+m-2-i]));
            ans+=minn;

        }
        cout<<ans<<endl;
    }
    return 0;
}














