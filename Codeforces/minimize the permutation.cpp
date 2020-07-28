#include<bits/stdc++.h>
using namespace std;
int arr[105];
int vis[105];
int main()
{
    int t,n,x;
    cin>>t;
    int cnt;
    while(t--)
    {
        cin>>n;
        cnt =n-1;
        for(int i=1; i<=n; i++)
            cin>>arr[i];

               for(int i=1; i<=n; i++)
            {
                for (int j=1; j<=n; j++)
                {
                    if(arr[j]==i)
                    {
                        x=j;
                        break;
                    }

                }

        while((arr[x] !=x ) && x>0 ){
                if(vis[x-1]==1){
                        vis[x]=1;
                     break;

                }

                 swap(arr[x],arr[x-1]);
                 vis[x-1]=1;

                 cnt--;
                 x--;

                 if(!cnt) break;
             }
             if(!cnt) break;


            }
      memset(vis,0,sizeof vis);
            for(int i=1;i<=n;i++) cout<<arr[i]<<" ";

            cout<<endl;

    }

    return 0;
}
