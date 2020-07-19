#include<bits/stdc++.h>
using namespace std;
int arr[368][368];
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

        for(int i=1; i<=n; i++)
        {

            for(int j=1; j<=m; j++)
            {

                cin>>arr[i][j];
            }
        }
        int f=0;

        for(int i=1; i<=n; i++)
        {

            for(int j=1; j<=m; j++)
            {

                if(i==1 && j==1 or i==n && j==1 or i==1 && j==m or i==n && j==m)
                {

                    if(arr[i][j]>2)
                    {
                        f=1;
                        break;
                    }
                }

                else if(i==1 || i==n || j==1 || j==m)
                {
                    if(arr[i][j]>3)
                    {
                        f=1;
                        break;
                    }
                }

                else if(arr[i][j]>4)
                {
                    f=1;
                    break;
                }
            }
        }

        if(f==1)
            cout<<"NO"<<endl;

        else
        {

            cout<<"YES"<<endl;


            for(int i=1; i<=n; i++)
            {

                for(int j=1; j<=m; j++)
                {

                    if(i==1 && j==1 or i==n && j==1 or i==1 && j==m or i==n && j==m)
                    {

                        cout<<2<<" ";
                    }

                    else if(i==1 || i==n || j==1 || j==m)
                    {

                        cout<<3<<" ";

                    }

                    else
                    {
                        cout<<4<<" ";
                    }
                }
                if(i!=n )
                    cout<<endl;
            }
            cout<<endl;

        }


    }


    return 0;

}










